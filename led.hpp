#pragma once

#include "mbed.h"

class LED {
public:
    // constructor
    LED(PinName pin);

    // method called for toggling the led
    void toggle();
};
