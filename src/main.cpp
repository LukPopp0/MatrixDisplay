#include <Arduino.h>
#include "network/CaptivePortal.h"
#include "persistence/persistenceManager.h"
#include "SerialWrapper.h"
#include "fileServer.h"

#define DEBUG

void setup() {
  setupSerial(115200);

  if(!FileServer::setup()) {
    println(F("An Error has occurred while mounting LittleFS."));
  }
  PersistenceStore::setup();

  CaptivePortal::setup();
}

void loop() {
  CaptivePortal::loop();
}