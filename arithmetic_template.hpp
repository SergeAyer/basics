#pragma once

namespace arithmetic_template {

template <class T> class Arithmetic {
public:
    Arithmetic(T a, T b) : _a(a), _b(b)
    {

    }
 
    T add() 
    {
        return _a + _b;
    }

    T sub() 
    {
        return _a - _b;
    }

private:
    T _a;
    T _b;
};

} // namespace arithmetic_template