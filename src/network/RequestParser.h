#pragma once

#include "SerialWrapper.h"
#include "persistence/configuration.h"
#include "persistence/persistenceManager.h"
#include <ArduinoJson.h>
#include <ESP8266WebServer.h>


namespace RequestParser {
const String generateConfigJson();
const Config::Configuration argsToConfiguration(ESP8266WebServer& server);
const String argsToString(ESP8266WebServer& server);

// private namespace
namespace {
void splitCSVToArray(const char* input, uint8_t* output, const char* token = ",") {
  // unsafe and shit code, but it could work
  char buffer[16];
  strcpy(buffer, input);
  char* segment_holder;
  segment_holder = strtok(buffer, token);

  uint8_t i = 0;
  while (segment_holder != NULL) {
    char* unused_tail;
    uint8_t color = strtol(segment_holder, &unused_tail, 10);
    // really unsafe usage here!
    output[i++] = color;

    segment_holder = strtok(NULL, token);
  }
}
} // namespace

/**
 * Loads the configuration and creates a json object from it
 * @return json string representing the current configuration
 * */
const String generateConfigJson() {
  const Config::Configuration config = PersistenceManager::get();
  const int NUM_JSON_ELEMENTS = 3;

  // actual number of objects, in this case number of lines
  const uint16_t capacity = JSON_OBJECT_SIZE(NUM_JSON_ELEMENTS);
  StaticJsonDocument<capacity> doc;

  // add element for every config parameter
  doc["selectedImage"] = config.selectedImage;
  doc["fps"] = config.fps;
  doc["brightness"] = config.brightness;

  // add new fields here and increase JSON size

  String json = "";
  serializeJson(doc, json);
  printlnRaw(json);
  return json;
}

/**
 * Takes server arguments and creates new config object out of it
 * @param server the server object that provides the arguments
 * @return new config object representing the server arguments
 * */
const Config::Configuration argsToConfiguration(ESP8266WebServer& server) {
  Config::Configuration newValues = Config::Configuration();

  // implicit clamping could make problems but it's just nicer to read
  if (server.argName(0) == "selectedImage")
    newValues.selectedImage = server.arg(0).toInt();
  else
    logError(F("Value 0 not found"));

  if (server.argName(1) == "fps")
    newValues.fps = server.arg(1) == "true" ? true : false;
  else
    logError(F("Value 1 not found"));

  if (server.argName(1) == "brightness")
    newValues.brightness = server.arg(1) == "true" ? true : false;
  else
    logError(F("Value 1 not found"));

  // add new fields here

  return newValues;
}

// convert server arguments to one string message
const String argsToString(ESP8266WebServer& server) {
  String message = "Number of args received: ";
  message += server.args();

  for (int i = 0; i < server.args(); i++) {
    message += "\nArg #" + (String)i + " >> ";
    message += server.argName(i) + ": ";
    message += server.arg(i);
  }

  return message;
}
} // namespace RequestParser