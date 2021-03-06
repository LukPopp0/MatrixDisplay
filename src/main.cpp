#include <Arduino.h>

#define DEBUG

#include "SerialWrapper.h"
#include "fileServer.h"
#include "ledController.h"
#include "network/CaptivePortal.h"
#include "persistence/persistenceManager.h"


void setup() {
  setupSerial(115200);
  println(F("Starting setup."));

  PersistenceStore::setup();
  if (!FileServer::setup()) {
    println(F("An Error has occurred while mounting LittleFS."));
  }

  CaptivePortal::setup();
  LedController::setup();
  println(F("Finished setup."));
}

void loop() {
  FastLED.delay(1);
  CaptivePortal::loop();
  PersistenceManager::trySave();
  LedController::loop();
  heartbeatSerial();
}