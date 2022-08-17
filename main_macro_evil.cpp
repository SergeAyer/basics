#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

#define absolute_value(i) ( (i) >= 0 ? (i) : -(i) )

static int nbrOfCalls = 0;

// f is a function returning an integer value
int f() 
{
    nbrOfCalls++;
    return -1;  
}

int main() 
{    
    // use trace library for console output
    mbed_trace_init();
 
    int x = -2;
    int ans1 = absolute_value(++x); // what is the value of ans1 ?
    int ans2 = absolute_value(f()); // how many times is f() called?

    tr_debug("value of ans1 is %d", ans1);
    tr_debug("nbr of calls of f() is %d", nbrOfCalls);
}
