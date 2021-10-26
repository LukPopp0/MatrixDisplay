#pragma once

#include <Arduino.h>
#include "LittleFS.h"

#include "SerialWrapper.h"

namespace FileServer {
bool setup();
const String getContentType(String filename);
const bool fileExists(String path);
const File getFile(String path);

bool setup() {
    return LittleFS.begin();
}

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

} // namespace FileServer
