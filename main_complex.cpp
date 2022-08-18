#include "mbed.h"

#include "mbed_trace.h"
#if MBED_CONF_MBED_TRACE_ENABLE
#define TRACE_GROUP "main"
#endif // MBED_CONF_MBED_TRACE_ENABLE

#include "arithmetic_template.hpp"
#include "complex.hpp"

int main() 
{    
    // use trace library for console output
    mbed_trace_init();
 
    Complex c1(1.0, 2.0);
    Complex c2(0.0, 1.0);
  
    arithmetic_template::Arithmetic<Complex> a3(c1, c2);
    tr_debug("Add is %f + %fi, sub is %f + %fi\n",
            a3.add().getReal(), a3.add().getImg(),
            a3.sub().getReal(), a3.sub().getImg());

    return 0;
}