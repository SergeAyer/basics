#include "led_solution.hpp"

namespace solution {

LED::LED(PinName pin) : DigitalOut(pin) 
{
}

void LED::toggle() 
{
    write(! read());
}

} // namespace solution