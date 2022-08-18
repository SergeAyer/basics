#include "led_static.hpp"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "LED"
#endif // MBED_CONF_MBED_TRACE_ENABLE

namespace led_static {

// initialization of static variables
int LED::_nbrOfInstances = 0;
int LED::_nbrOfAliveInstances = 0;

LED::LED(PinName pin) : DigitalOut(pin) 
{
    // increment the number of created instances 
    _nbrOfInstances++;
    _nbrOfAliveInstances++;
    tr_debug("Nbr of created instances: %d, which are alive: %d", 
             _nbrOfInstances, _nbrOfAliveInstances);
}

LED::~LED()
{
    // decrement the number of alive instances
    _nbrOfAliveInstances--;
}

void LED::toggle() 
{
    write(! read());
}

} // namespace led_static