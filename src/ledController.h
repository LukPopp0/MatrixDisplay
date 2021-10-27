#pragma once

#define FASTLED_INTERNAL
#include <FastLED.h>

#include "persistence/configuration.h"
#include "persistence/persistenceManager.h"
#include "image_data/image1.h"
#include "image_data/image2.h"

namespace LedController {

void setup();
void loop();
void updateConfiguration();

namespace {

#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))
const uint8_t LED_PIN = D6; // = data pin 12
const uint8_t MATRIX_WIDTH = 16;
const uint8_t NUM_LEDS = 256;
CRGB leds[NUM_LEDS];

} // namespace

// set up leds for use and register listener
void setup() {
  pinMode(LED_PIN, OUTPUT);

  FastLED.addLeds<WS2812B, LED_PIN, RGB>(leds, NUM_LEDS);

  PersistenceManager::registerListener(updateConfiguration);
}

void loop() {
  // TODO
}

void updateConfiguration() {
  // TODO
};

} // namespace LedController
