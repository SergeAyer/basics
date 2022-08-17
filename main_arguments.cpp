#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

void addOne(int i) 
{
    // Has no effect outside this scope because this is a copy of the original
    i++; 
}

void addOne_ref(int &i) 
{
    // Actually changes the original variable
    i++; 
}

void addOne(int *i) 
{
    // Actually changes the original variable, but i can be null ! 
    (*i)++; 
}

int main() 
{    
    // use trace library for console output
    mbed_trace_init();

    int i = 0;
  
    addOne(i);
    tr_debug("value of i is %d\n", i);

    addOne_ref(i);
    tr_debug("value of i is %d\n", i);

    addOne(&i);
    tr_debug("value of i is %d\n", i);

    return 0;
}
