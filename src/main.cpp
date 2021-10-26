#include <Arduino.h>

#define DEBUG

#include "network/CaptivePortal.h"
#include "persistence/persistenceManager.h"
#include "SerialWrapper.h"
#include "fileServer.h"


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
  heartbeatSerial();
}