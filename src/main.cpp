#include <Arduino.h>

#define DEBUG

#include "SerialWrapper.h"
#include "fileServer.h"
#include "network/CaptivePortal.h"
#include "persistence/persistenceManager.h"
#include "ledController.h"

void setup() {
  setupSerial(115200);

  if (!FileServer::setup()) {
    println(F("An Error has occurred while mounting LittleFS."));
  }
  PersistenceStore::setup();

  CaptivePortal::setup();
  LedController::setup();
}

void loop() {
  FastLED.delay(1);
  CaptivePortal::loop();
  PersistenceManager::trySave();
  LedController::loop();
  heartbeatSerial();
}