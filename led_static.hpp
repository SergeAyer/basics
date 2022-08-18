#pragma once

#include "mbed.h"

namespace led_static {

class LED : public DigitalOut {
public:
    // define specific blinking intervals
    static constexpr std::chrono::milliseconds LONG_BLINKING_INTERVAL = 5000ms;
    static constexpr std::chrono::milliseconds SHORT_BLINKING_INTERVAL = 500ms;

    // constructor
    LED(PinName pin);

    // destructor 
    ~LED();

    // method called for toggling the led
    void toggle();
    
private:
    // static variable used for counting the number of instances created
    static int _nbrOfInstances;
    // static variable used for counting the number of alive instances
    static int _nbrOfAliveInstances;
};

} // namespace led_static