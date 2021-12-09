#pragma once

#define FASTLED_INTERNAL
#include <FastLED.h>

#include "SerialWrapper.h"
#include "image_data/00_heart.h"
#include "persistence/configuration.h"
#include "persistence/persistenceManager.h"


namespace LedController {
using namespace std;

void setup();
void loop();
void updateConfiguration();
void showFrame(auto image, uint8_t frame);
void setLedInMatrix(uint8_t row, uint8_t col, const uint8_t clr[3]);
void animDataToImage(vector<uint8_t> animData, vector<vector<vector<uint8_t>>>& outImage);

namespace {

#define LEN(arr) ((uint8_t)(sizeof(arr) / sizeof(arr)[0]))
const uint8_t LED_PIN = D6; // = data pin 12
const uint8_t MATRIX_WIDTH = 16;
const uint16_t NUM_LEDS = 256;
const uint8_t MAX_LED_BRIGHTNESS = 255 / 3;

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

    switch (currentImageNr) {
    case 0:
      showFrame(heart, currentFrame);
      break;
    // case 1:
    //   showFrame(fireplace, currentFrame);
    //   break;
    // case 2:
    //   showFrame(loki, currentFrame);
    //   break;
    // case 3:
    //   showFrame(thor, currentFrame);
    //   break;
    // case 4:
    //   showFrame(her, currentFrame);
    //   break;
    // case 5:
    //   showFrame(us, currentFrame);
    //   break;
    // case 6:
    //   showFrame(sun, currentFrame);
    //   break;
    // case 8:
    //   showFrame(embers, currentFrame);
    //   break;
    // case 10:
    //   showFrame(bulba, currentFrame);
    //   break;
    // case 11:
    //   showFrame(charma, currentFrame);
    //   break;
    // case 12:
    //   showFrame(squirtle, currentFrame);
    //   break;
    // case 13:
    //   showFrame(turtwig, currentFrame);
    //   break;
    // case 14:
    //   showFrame(pikachu, currentFrame);
    //   break;
    default:
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
  switch (currentImageNr) {
  case 0:
    numFrames = LEN(heart);
    break;
  // case 1:
  //   numFrames = LEN(fireplace);
  //   break;
  // case 2:
  //   numFrames = LEN(loki);
  //   break;
  // case 3:
  //   numFrames = LEN(thor);
  //   break;
  // case 4:
  //   numFrames = LEN(her);
  //   break;
  // case 5:
  //   numFrames = LEN(us);
  //   break;
  // case 6:
  //   numFrames = LEN(sun);
  //   break;
  // case 8:
  //   numFrames = LEN(embers);
  //   break;
  // case 10:
  //   numFrames = LEN(bulba);
  //   break;
  // case 11:
  //   numFrames = LEN(charma);
  //   break;
  // case 12:
  //   numFrames = LEN(squirtle);
  //   break;
  // case 13:
  //   numFrames = LEN(turtwig);
  //   break;
  // case 14:
  //   numFrames = LEN(pikachu);
  //   break;
  default:
    numFrames = 1;
    break;
  }

  // calculate fps
  millisToNextFrame = 1000 / config.fps;
}

// show a specifc frame from an image
void showFrame(auto image, uint8_t frame) {
  leds[0] = CRGB(0, 0, 0);

  for (uint8_t i = 0; i < MATRIX_WIDTH; ++i) {

    for (uint8_t j = 0; j < MATRIX_WIDTH; ++j) {
      setLedInMatrix(i, j, image[frame][i][j]);
    }
  }
  frame = (frame + 1) % numFrames;

  FastLED.show();
}

// sets the color of one LED
void setLedInMatrix(uint8_t row, uint8_t col, const uint8_t clr[3]) {
  row = MATRIX_WIDTH - row - 1;
  bool rowUneven = row % 2;
  if (rowUneven)
    col = MATRIX_WIDTH - 1 - col;

  uint8_t idx = row * MATRIX_WIDTH + col;
  // adding one here to skip the first led that is inside the box
  leds[1 + idx] = CRGB(clr[0], clr[1], clr[2]);
}

void animDataToImage(vector<uint8_t> animData, vector<vector<vector<uint8_t>>>& outImage) {
  uint8_t numFrames = animData[0];
  const uint32_t numPixels = MATRIX_WIDTH * MATRIX_WIDTH;
  print(F("Size of animData: "));
  printlnRaw(animData.size());

  outImage.resize(numFrames,
                  vector<vector<uint8_t>>(MATRIX_WIDTH * MATRIX_WIDTH, vector<uint8_t>(3)));

  for (uint8_t i = 0; i < numFrames; ++i) {
    for (uint8_t x = 0; x < MATRIX_WIDTH; ++x) {
      for (uint8_t y = 0; y < MATRIX_WIDTH; ++y) {
        uint32_t idx = 3 + 3 * (i * numPixels + x * MATRIX_WIDTH + y);
        outImage[i][x * MATRIX_WIDTH + y][0] = animData[idx + 0];
        outImage[i][x * MATRIX_WIDTH + y][1] = animData[idx + 1];
        outImage[i][x * MATRIX_WIDTH + y][2] = animData[idx + 2];
        Serial.print(animData[idx]);
        Serial.print(" ");
        Serial.print(animData[idx + 1]);
        Serial.print(" ");
        Serial.println(animData[idx + 2]);
      }
    }
  }

  print(F("Done with the anim string to image :)"));
}

} // namespace LedController
