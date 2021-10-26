#include <Arduino.h>
#include "network/CaptivePortal.h"
#include "fileServer.h"

void setup() {
  if(!FileServer::setup()) {
    Serial.println("An Error has occurred while mounting LittleFS.");
  }
  CaptivePortal::setup();
}

void loop() {
  CaptivePortal::loop();
}