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

    const bool operator==(const Configuration& other) {
        return (
            this->selectedImage == other.selectedImage &&
            this->fps == other.fps
        );
    }
};

Configuration defaultConfiguration = {
    1, 4
};

} // namespace Configuration