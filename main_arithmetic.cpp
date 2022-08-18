#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

#include "arithmetic.hpp"

int main() {
    
    // use trace library for console output
    mbed_trace_init();
 
    Arithmetic a1(1, 2);
    tr_debug("Add is %d, sub is %d\n", a1.add(), a1.sub());

    return 0;
}