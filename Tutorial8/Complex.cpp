#include "Complex.h"

// Overloading operators as member functions
void Complex::operator+=(const Complex& right) {
    this->r += right.r;
    this->i += right.i;
}

void Complex::operator-=(const Complex& right) {
    this->r -= right.r;
    this->i -= right.i;
}

void Complex::operator*=(const Complex& right) {
    double r1 {r}, i1{i}, r2 {right.r}, i2 {right.i};
    this->r = r1*r2 - i1*i2;
    this->i = r1*i2 + i1*r2;
}

void Complex::operator/=(const Complex& right) {
    double r1 {r}, i1{i}, r2 {right.r}, i2 {right.i};
    this->r = (r1*r2 + i1*i2) / (r2*r2 + i2*i2);
    this->i = (-r1*i2 + i1*r2) / (r2*r2 + i2*i2);
}

void Complex::changeNum(double rr, double ii) {
    r = rr;
    i = ii;
}

// Overloading operators as friend functions
ostream& operator<<(ostream& out, const Complex& obj) {
    out << "the number is: " << obj.r;
    if (obj.i < 0)
        out << " - " << -obj.i << "i";
    else if (obj.i > 0)
        out << " + " << obj.i << "i";
    return out;
}

Complex operator+(const Complex& left, const Complex& right) {
    Complex temp {left};
    temp += right;
    return temp;
}

Complex operator-(const Complex& left, const Complex& right) {
    Complex temp {left};
    temp -= right;
    return temp;
}

Complex operator*(const Complex& left, const Complex& right) {
    Complex temp {left};
    temp *= right;
    return temp;
}

Complex operator/(const Complex& left, const Complex& right) {
    Complex temp {left};
    temp /= right;
    return temp;
}

bool operator==(const Complex& left, const Complex& right) {
    return (left.r == right.r && left.i == right.i);
}

bool operator!=(const Complex& left, const Complex& right) {
    return !(left == right);
}