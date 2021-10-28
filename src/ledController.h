#pragma once

#define FASTLED_INTERNAL
#include <FastLED.h>

#include "persistence/configuration.h"
#include "persistence/persistenceManager.h"
#include "image_data/image1.h"
#include "image_data/image2.h"
#include "SerialWrapper.h"

namespace LedController {

void setup();
void loop();
void updateConfiguration();
void showFrame(auto image, uint8_t frame);
void setLedInMatrix(uint8_t row, uint8_t col, const uint8_t clr[3]);

namespace {

#define LEN(arr) ((uint8_t) (sizeof (arr) / sizeof (arr)[0]))
const uint8_t LED_PIN = D6; // = data pin 12
const uint8_t MATRIX_WIDTH = 16;
const uint16_t NUM_LEDS = 256;

CRGB leds[NUM_LEDS];
uint32_t tNextFrame = 0;
uint16_t millisToNextFrame = 200;
uint8_t numFrames = 1;
uint8_t currentFrame = 0;
uint8_t currentImageNr = 0;


} // namespace

// set up leds for use and register listener
void setup() {
  pinMode(LED_PIN, OUTPUT);

  FastLED.addLeds<WS2812B, LED_PIN, RGB>(leds, NUM_LEDS);

  PersistenceManager::registerListener(updateConfiguration);
  updateConfiguration();
}

void loop() {
  if(millis() >= tNextFrame) {
    tNextFrame = millis() + millisToNextFrame;

    switch (currentImageNr)
    {
      case 0:
        showFrame(image1, currentFrame);
        break;
      case 1:
        showFrame(image2, currentFrame);
        break;
      // case 2:
      //   println(F("case 2"));
      //   // showFrame(image3, currentFrame);
      //   break;
      default:
        println(F("clear"));
        FastLED.clear();
        break;
    }

    currentFrame = (currentFrame + 1) % numFrames;
  }
}

// updates this namespace's variables from the current config
void updateConfiguration() {
  Config::Configuration config = PersistenceManager::get();

  println(F("Updating configuration."));

  // set brightness
  FastLED.setBrightness(config.brightness);

  // set selected image and reset current frame count
  currentFrame = 0;
  currentImageNr = config.selectedImage;
  switch (currentImageNr)
  {
  case 0:
    numFrames = LEN(image1);
    break;
  case 1:
    numFrames = LEN(image2);
    break;
  default:
    numFrames = 1;
    break;
  }

  // calculate fps
  millisToNextFrame = 1000 / config.fps;
}

// show a specifc frame from an image
void showFrame(auto image, uint8_t frame) {
 leds[0] = CHSV(0, 50, 50);

  for(uint8_t i = 0; i < MATRIX_WIDTH; ++i) {

    for(uint8_t j = 0; j < MATRIX_WIDTH; ++j) {
      setLedInMatrix(i, j, image[frame][i][j]);
    }
  }
  frame = (frame + 1) % numFrames;

  FastLED.show();
}

// sets the color of one LED
void setLedInMatrix(uint8_t row, uint8_t col, const uint8_t clr[3]) {
  bool rowUneven = row % 2;
  if(!rowUneven) col = MATRIX_WIDTH - 1 - col;

  uint8_t idx = row * MATRIX_WIDTH + col;
  // adding one here to skip the first led that is inside the box
  leds[1 + idx] = CRGB(clr[0], clr[1], clr[2]);
}

} // namespace LedController
