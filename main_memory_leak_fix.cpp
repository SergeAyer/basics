
#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

void function_with_memory_leak_fix()
{
    // solution with raw pointer
    char* pArray = new char[100];
    // for preventing compiler optimization use pArray
    tr_debug("pArray[99] = %d", pArray[99]);
    // call delete []    
    delete [] pArray;
    pArray = nullptr;

    // solution with unique_ptr 
    // memory will be automatically released when array_ptr is removed from the stack
    std::unique_ptr<char> array_ptr = std::unique_ptr<char>(new char[99]);
    tr_debug("array_ptr[99] = %d", array_ptr.get()[99]);    
}

int main() 
{    
    // use trace library for console output
    mbed_trace_init();

    for (int i = 0; i < 10000; i++) {
        function_with_memory_leak_fix();
        tr_debug("Iteration #%i", i);
    }

    return 0;
}