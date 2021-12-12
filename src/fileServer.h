#pragma once

#include "LittleFS.h"
#include <Arduino.h>
#include <sstream>

#include "SerialWrapper.h"

namespace FileServer {
bool setup();
const String getContentType(String filename);
const bool fileExists(String path);
const File getFile(String path);
uint8_t readAnimFileToInts(String path, uint8_t outputData[16][16][16][3]);

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

uint8_t readAnimFileToInts(String path, uint8_t outputData[16][16][16][3]) {
  File f = getFile(path);
  const uint8_t maxSize = 16 * 16 * 3 * 16;
  uint8_t numFrames = 0;

  if (!f) {
    println(F("Failed to open file for reading"));
  }

  if (f.available()) {
    String line = f.readStringUntil('\n');
    numFrames = line.toInt();
    // Reading the second line, currently unused
    f.readStringUntil('\n');
  }

  print(F("Starting to read"));
  uint16_t counter = 0;
  while (f.available()) {
    String line = f.readStringUntil('\n');
    const char* cline = line.c_str();

    // calculate position in array
    uint8_t xy = counter % (16 * 16);
    uint8_t frame = (counter - xy) / (16 * 16);
    uint8_t y = xy % 16;
    uint8_t x = (xy - y) / 16;

    char* pch = strtok((char*)cline, " ");
    outputData[frame][x][y][0] = (uint8_t)std::stoi(pch);
    pch = strtok(NULL, " ");
    outputData[frame][x][y][1] = (uint8_t)std::stoi(pch);
    pch = strtok(NULL, " ");
    outputData[frame][x][y][2] = (uint8_t)std::stoi(pch);

    counter++;

    if (counter % 16 == 0) {
      print(F("."));
    }
  }
  f.close();
  println(F("done."));
  return numFrames;
}

} // namespace FileServer
