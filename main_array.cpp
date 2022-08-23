
#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

int main() 
{    
    // the array size is constant and known at compile time
    static constexpr int arraySize = 30;
    // myArray1 lives on the stack (local variable) or in the data section (global variable)
    int myArray1[arraySize] = {0};
    // myArray2 lives on the heap
    int* myArray2 = new int[arraySize];
    // Heap memory must be released manually by calling delete
    // When releasing memory that was allocated as an array, you must use
    // the bracket version of delete: delete[] myArray2;,
    // although it is not mandatory for basic types.
    delete[] myArray2;
    // it is a good practice to reset variables pointing to released memory to NULL
    myArray2 = NULL;
    // since C99/C++99, it is also possible to allocate arrays
    // of dynamic size on the stack
    // varSize is not a constant in the code below.
    int varSize = 10;
    int myArray[varSize];

    return 0;
}
