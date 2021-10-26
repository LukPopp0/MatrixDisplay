#pragma once

#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

#include "SerialWrapper.h"
#include "fileServer.h"

namespace CaptivePortal {

void handleConfigPortal();

namespace {
  const byte DNS_PORT = 53;
  IPAddress apIP(172, 217, 28, 1);
  DNSServer dnsServer;
  ESP8266WebServer webServer(80);
  const char *captivePortalName = "My LED Matrix";
  String responseHTML = ""
                        "<!DOCTYPE html><html lang='en'><head>"
                        "<meta name='viewport' content='width=device-width'>"
                        "<title>CaptivePortal</title></head><body>"
                        "<h1>Hello World!</h1><p>This is a captive portal example."
                        " All requests will be redirected here.</p></body></html>";
}

void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP(captivePortalName);

  // if DNSServer is started with "*" for domain name, it will reply with
  // provided IP to all DNS request
  dnsServer.start(DNS_PORT, "*", apIP);

  webServer.on(("/config"), handleConfigPortal);

  // replay to all requests with same HTML
  webServer.onNotFound([]() {
    File f = FileServer::getFile("/index.html");
    printlnRaw(f.readString());
  });
  webServer.begin();
}

void loop() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}

void handleConfigPortal() {
  webServer.send(200, "text/html", responseHTML);
}

} // namespace CaptivePortal
