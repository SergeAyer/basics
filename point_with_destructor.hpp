#pragma once

namespace with_destructor {

class Point {
public:
    // constructors
    Point();
    Point(float x, float y);

    // destructor
    ~Point();
    
    // public methods
    void move(float dx, float dy);
    float x();
    float y();
    
private:
    // private data fields
    float _x;
    float _y;
};

} // namespace with_destructor