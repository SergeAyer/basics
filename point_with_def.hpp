#pragma once

class Point {
public:
    Point() : _x(0), _y(0) 
    {        
    }

    Point(float x, float y) : _x(x), _y(y) 
    {        
    }

    void move(float dx, float dy) 
    {
        _x += dx;
        _y += dy;
    }

private:
    float _x;
    float _y;
};