#include "point_with_destructor.hpp"

namespace with_destructor {

Point::Point() : _x(0), _y(0)
{
}


Point::Point(float x, float y) : _x(x), _y(y)
{
}

void Point::move(float dx, float dy) 
{
    _x += dx;
    _y += dy;
}

float Point::x()
{
    return _x;
}

float Point::y()
{
    return _y;
}

} // namespace with_destructor