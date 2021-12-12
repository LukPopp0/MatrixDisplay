#pragma once

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>


#include "SerialWrapper.h"
#include "fileServer.h"
#include "network/RequestParser.h"

namespace CaptivePortal {

void handleFile(String path);
void handleNotFound();
void handleConfigRequest();
void handleConfigUpdate();

namespace {
const byte DNS_PORT = 53;
const IPAddress apIP(172, 217, 28, 1);
DNSServer dnsServer;
ESP8266WebServer webServer(80);
const char* captivePortalName = "My LED Matrix";
} // namespace

void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP(captivePortalName);

  // if DNSServer is started with "*" for domain name, it will reply with
  // provided IP to all DNS request
  dnsServer.start(DNS_PORT, "*", apIP);

  webServer.on(("/config"), handleConfigRequest);
  webServer.on(("/update"), handleConfigUpdate);

  // stream initial html page for basic requests
  webServer.onNotFound(handleNotFound);
  webServer.begin();
}

void loop() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}

/**
 * handle all undefined uris
 * this includes the standard captive portal request
 * */
void handleNotFound() {
  // look for a html file within the path of the server
  String path = webServer.uri();

  printlnRaw(path);
  // check if it's the standard captive portal request (probe request)
  if (path.endsWith("/generate_204") || path.endsWith("/gen_204")) {
    handleFile("/index.html");
  } else {
    // else handle all other files
    if (path.endsWith("/"))
      path += "index.html";
    handleFile(path);
  }
}

// send requested files
void handleFile(String path) {
  if (FileServer::fileExists(path)) {
    File f = FileServer::getFile(path);
    String contentType = FileServer::getContentType(path);
    webServer.streamFile(f, contentType);
    f.close();
  } else {
    print(F("File '"));
    printRaw(path);
    println(F("' does not exist"));

    webServer.send(404, "text/html", "Requested file not found. Reupload the file system image.");
  }
}

void handleConfigRequest() {
  println(F("Received config request"));
  String json = RequestParser::generateConfigJson();

  webServer.send(200, F("application/json"), json);
}

void handleConfigUpdate() {
  println(F("Received config update."));
  printlnRaw(RequestParser::argsToString(webServer));
  PersistenceManager::set(RequestParser::argsToConfiguration(webServer));

  // everything is fine
  webServer.send(200);
}

} // namespace CaptivePortal
