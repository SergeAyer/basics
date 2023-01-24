
#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

void function_with_memory_leak()
{
    // using raw pointer without allocated with new (without calling delete)
    char* pArray = new char[100];
    // for preventing compiler optimization use pArray
    tr_debug("pArray[99] = %d", pArray[99]);
   
    // return without delete
    // the memory pointed by pArray won't be released
    // for the lifetime of the program
}

int main() 
{    
    // use trace library for console output
    mbed_trace_init();

    for (int i = 0; i < 10000; i++) {
        function_with_memory_leak();
        tr_debug("Iteration #%i", i);
    }

    return 0;
}