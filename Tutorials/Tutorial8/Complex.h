#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

class Complex{
    friend ostream& operator<<(ostream& out, const Complex& obj);
    friend Complex operator+(const Complex& left, const Complex& right);
    friend Complex operator-(const Complex& left, const Complex& right);
    friend Complex operator*(const Complex& left, const Complex& right);
    friend Complex operator/(const Complex& left, const Complex& right);
    friend bool operator==(const Complex& left, const Complex& right);
    friend bool operator!=(const Complex& left, const Complex& right);

private:
    double r;
    double i;

public:
    Complex() : r {0.0}, i {0.0} {};
    Complex(double rr, double ii) : r {rr}, i {ii} {};
    Complex(const Complex& src) : r {src.r}, i {src.i} {};
    double getR() const { return r; };
    double getI() const { return i; };
    void operator+=(const Complex& right);
    void operator-=(const Complex& right);
    void operator*=(const Complex& right);
    void operator/=(const Complex& right);
    void changeNum(double rr, double ii);
};

#endif // _COMPLEX_H_
