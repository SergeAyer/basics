#pragma once

class Point {
public:
    // constructors
    Point();
    Point(float x, float y);

    // public methods
    void move(float dx, float dy);
    float x();
    float y();
    
private:
    // private data fields
    float _x;
    float _y;
};
