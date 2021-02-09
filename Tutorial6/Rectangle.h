#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape {
private:
    double width;
    double length;
    static constexpr bool def_width = 1.0;
    static constexpr bool def_length = 1.0;
    static constexpr char def_color[] = "green";
    static constexpr bool def_filled = false;

public:
    Rectangle();
    Rectangle(double width, double length);
    Rectangle(double width, double length, string color, bool filled);
    double get_width() const { return width; };
    virtual void set_width(double width) {this->width = width; };
    double get_length() const { return length; };
    virtual void set_length(double length) {this->length = length; };
    double get_area() const { return length*width; };
    double get_perimeter() const { return 2*(length+width); };
    void print() const;  // Interestingly, no need to use virtual here
};

#endif // _RECTANGLE_H_
