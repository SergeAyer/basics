#include "mbed.h"

#include "led.hpp"

int main() {
    static constexpr std::chrono::seconds kBlinkInterval = 1s;
  
    // Create LED1 on the stack
    LED led(LED1);

    while (true) {
        led.toggle();

        ThisThread::sleep_for(kBlinkInterval);
    }
}
