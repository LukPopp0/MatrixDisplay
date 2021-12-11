#pragma once

#define FASTLED_INTERNAL
#include <FastLED.h>
#include <array>
#include <vector>

#include "SerialWrapper.h"
#include "persistence/configuration.h"
#include "persistence/persistenceManager.h"

namespace LedController {
using namespace std;

void setup();
void loop();
void updateConfiguration();
void showFrame(uint8_t frame);
void setLedInMatrix(uint8_t row, uint8_t col, array<uint8_t, 3>& clr);
void animDataToImage(vector<uint8_t> animData);

namespace {

#define LEN(arr) ((uint8_t)(sizeof(arr) / sizeof(arr)[0]))
const uint8_t LED_PIN = D6; // = data pin 12
const uint8_t MATRIX_WIDTH = 16;
const uint16_t NUM_LEDS = 256;
const uint8_t MAX_LED_BRIGHTNESS = 255 / 3;

array<array<array<array<uint8_t, 3>, 16>, 16>, 12> currentImage;
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

  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255 / 3);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 5000);

  PersistenceManager::registerListener(updateConfiguration);
  updateConfiguration();
}

void loop() {
  if (millis() >= tNextFrame) {
    tNextFrame = millis() + millisToNextFrame;

    showFrame(currentFrame);
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

  const String nrToImage[] = {
      "/image_data/01-01-bulba.anim",    "/image_data/01-02-charmander.anim",
      "/image_data/01-03-squirtle.anim", "/image_data/01-xx-eevee.anim",
      "/image_data/01-xx-pikachu.anim",  "/image_data/03-01-treecko.anim",
      "/image_data/03-02-torchic.anim",  "/image_data/03-03-mudkip.anim",
      "/image_data/04-01-turtwig.anim",  "/image_data/04-02-chimchar.anim",
      "/image_data/04-03-piplup.anim",   "/image_data/06-03-froakie.anim",
      "/image_data/07-01-rowlet.anim",   "/image_data/07-02-litten.anim",
  };

  // set current image and number of frames
  vector<uint8_t> s = FileServer::readFileToInts(nrToImage[currentImageNr]);
  animDataToImage(s);

  // calculate fps
  millisToNextFrame = 1000 / config.fps;
}

// show a specifc frame from an image
void showFrame(uint8_t frame) {
  leds[0] = CRGB(0, 0, 0);

  for (uint8_t i = 0; i < MATRIX_WIDTH; ++i) {
    for (uint8_t j = 0; j < MATRIX_WIDTH; ++j) {
      setLedInMatrix(i, j, currentImage[frame][j][i]);
    }
  }

  FastLED.show();
}

// sets the color of one LED
void setLedInMatrix(uint8_t row, uint8_t col, array<uint8_t, 3>& clr) {
  row = MATRIX_WIDTH - row - 1;
  bool rowUneven = row % 2;
  if (rowUneven)
    col = MATRIX_WIDTH - 1 - col;

  uint8_t idx = row * MATRIX_WIDTH + col;
  // adding one here to skip the first led that is inside the box
  leds[1 + idx] = CRGB(clr[0], clr[1], clr[2]);
}

void animDataToImage(vector<uint8_t> animData) {
  numFrames = animData[0];
  const uint32_t numPixels = MATRIX_WIDTH * MATRIX_WIDTH;
  print(F("Size of animData: "));
  printlnRaw(animData.size());

  for (uint8_t i = 0; i < numFrames; ++i) {
    for (uint8_t x = 0; x < MATRIX_WIDTH; ++x) {
      for (uint8_t y = 0; y < MATRIX_WIDTH; ++y) {
        uint32_t idx = 3 + 3 * (i * numPixels + x * MATRIX_WIDTH + y);
        currentImage[i][x][y][0] = animData[idx + 0];
        currentImage[i][x][y][1] = animData[idx + 1];
        currentImage[i][x][y][2] = animData[idx + 2];
      }
    }
  }
}

} // namespace LedController
