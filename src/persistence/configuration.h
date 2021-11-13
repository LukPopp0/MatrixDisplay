#pragma once

#include <stdint.h>

namespace Config {

/**
 * change with each design iteration to prevent EEPROM inconsistency and help
 * with wear leveling of EEPROM cells.
 * */
const uint8_t VERSION = 1;

struct Configuration {
  uint8_t selectedImage;
  uint8_t fps;
  uint8_t brightness;

  const bool operator==(const Configuration& other) {
    return (this->selectedImage == other.selectedImage && this->fps == other.fps &&
            this->brightness == other.brightness);
  }
};

const Configuration defaultConfiguration = {0, 12, 84};

} // namespace Config