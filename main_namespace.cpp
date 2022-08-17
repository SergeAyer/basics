#include "mbed.h"

namespace A {
    class Example {
    public:
      void m() 
      {          
      } 
    };
}

namespace B {
    class Example {
    public:
      void m() 
      {          
      }
    };
}

int main() 
{   
    A::Example exampleA;
    B::Example exampleB;

    exampleA.m();
    exampleB.m();

    return 0;
}