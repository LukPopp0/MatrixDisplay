#include <Arduino.h>
#include "network/CaptivePortal.h"
#include "persistence/persistenceManager.h"
#include "fileServer.h"

void setup() {
  if(!FileServer::setup()) {
    Serial.println("An Error has occurred while mounting LittleFS.");
  }
  PersistenceStore::setup();

  CaptivePortal::setup();
}

void loop() {
  CaptivePortal::loop();
}