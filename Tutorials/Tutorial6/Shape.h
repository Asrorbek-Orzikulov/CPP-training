#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Shape {
private:
    string color;
    bool filled;

public:
    Shape();
    Shape(string color, bool filled);
    string get_color() const { return color; };
    void set_color(string color) { this->color = color; };
    bool get_filled() const { return filled; };
    void set_filled(bool filled) { this->filled = filled; };
    virtual void print() const;
    virtual double get_area() const { return 0.0; };
    virtual double get_perimeter() const { return 0.0; };
};

#endif // _SHAPE_H_
