#include "mbed.h"

#include "point_with_def.hpp"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

int main() 
{    
    // use trace library for console output
    mbed_trace_init();
 
    Point p1;
    Point p2(1.0, 1.0);
    
    p1.move(1.0, 1.0);

    return 0;
}
