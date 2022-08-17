#pragma once

#include "mbed.h"

namespace solution {

class LED : public DigitalOut {
public:
    // constructor
    LED(PinName pin);

    // method called for toggling the led
    void toggle();
};

} // namespace solution