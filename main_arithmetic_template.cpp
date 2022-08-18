#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

#include "arithmetic_template.hpp"

int main() 
{    
    // use trace library for console output
    mbed_trace_init();
 
    arithmetic_template::Arithmetic<int> a1(1, 2);
    tr_debug("Add is %d, sub is %d\n", a1.add(), a1.sub());

    arithmetic_template::Arithmetic<float> a2(1.5, 2.1);
    tr_debug("Add is %f, sub is %f\n", a2.add(), a2.sub());

    return 0;
}