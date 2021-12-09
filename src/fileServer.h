#pragma once

#include "LittleFS.h"
#include <Arduino.h>
#include <string>
#include <sstream>

#include "SerialWrapper.h"

namespace FileServer {
bool setup();
const String getContentType(String filename);
const bool fileExists(String path);
const File getFile(String path);
const std::vector<uint8_t> readFileToInts(String path);

bool setup() { return LittleFS.begin(); }

// map file name to content type
const String getContentType(String filename) {
  if (filename.endsWith(".html"))
    return "text/html";
  else if (filename.endsWith(".css"))
    return "text/css";
  else if (filename.endsWith(".js"))
    return "application/javascript";
  else if (filename.endsWith(".ico"))
    return "image/x-icon";
  else if (filename.endsWith(".gz"))
    return "application/x-gzip";
  return "text/plain";
}

// includes a check for a .gz variant
const bool fileExists(String path) {
  String pathWithGz = path + ".gz";
  return (LittleFS.exists(pathWithGz) || LittleFS.exists(path));
}

// get the original file or a .gz variant
const File getFile(String path) {
  String pathWithGz = path + ".gz";
  if (LittleFS.exists(pathWithGz))
    path += ".gz";
  print(F("Getting file from path: "));
  printlnRaw(path);
  return LittleFS.open(path, "r");
}

std::vector<std::string> split(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

const std::vector<uint8_t> readFileToInts(String path) {
  File f = getFile(path);

  if (!f) {
    println(F("Failed to open file for reading"));
    return std::vector<uint8_t>({0});
  }

  print(F("Starting to read..."));
  std::vector<uint8_t> v;
  while (f.available()) {
    String line = f.readStringUntil('\n');
    const char* cline = line.c_str();
    const std::string s(cline);

    std::vector<std::string> sNumbers = split(s, ' ');

    for(std::string& str: sNumbers) {
      v.push_back(std::stoi(str));
    }
  }
  f.close();
  println(F("done."));
  return v;
}

} // namespace FileServer
