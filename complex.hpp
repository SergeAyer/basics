#pragma once

class Complex {
public:
    Complex(float real, float img) : _real(real), _img(img)
    {

    }
 
    Complex(const Complex& other) : _real(other._real), _img(other._img)
    {

    }

    Complex& operator=(const Complex& rhs) 
    {
        this->_real = rhs._real;
        this->_img = rhs._img;
        return *this;
    }

    Complex& operator+(const Complex& rhs) 
    {
        this->_real += rhs._real;
        this->_img += rhs._img;
        return *this;
    }

    Complex& operator-(const Complex& rhs) 
    {
        this->_real -= rhs._real;
        this->_img -= rhs._img;
        return *this;
    }

    float getReal() const 
    {
        return this->_real;
    }

    float getImg() const 
    {
        return this->_img;
    }

private:
    float _real;
    float _img;
};