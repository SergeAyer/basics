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

    // object created on the stack with default constructor
    Point p1; 
    tr_debug("p1 coordinates: x: %f, y: %f", p1.x(), p1.y());

    // object created on the stack with specific constructor
    Point p2(1, 1); 
    tr_debug("p2 coordinates: x: %f, y: %f", p2.x(), p2.y());

    // object created on the heap
    Point* p3 = new Point(2.0, 2.0); 
    tr_debug("p3 coordinates: x: %f, y: %f", p3->x(), p3->y());

    // Copy an object on the stack means that the assignment operator of the class 
    // will be applied (usually it involves a deep copy of the object)
    Point p4 = p2;
    tr_debug("p4 coordinates: x: %f, y: %f", p4.x(), p4.y());
    p2.move(1.0, 1.0);
    tr_debug("p4 coordinates: x: %f, y: %f", p4.x(), p4.y());
    
    // Copying a pointer to an object simply copies the address (reference)
    // In C++, there is no built-in reference counting mechanism and copying a pointer 
    // only means copying an address
    Point* p5 = p3;
    p3->move(1.0, 1.0);
    tr_debug("p3 coordinates: x: %f, y: %f", p3->x(), p3->y());
    tr_debug("p5 coordinates: x: %f, y: %f", p5->x(), p5->y());
   
    return 0;
}
