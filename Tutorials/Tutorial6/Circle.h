#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
#include <cmath>

class Circle: public Shape {
private:
    double radius;
    static constexpr bool def_radius = 1.0;
    static constexpr char def_color[] = "green";
    static constexpr bool def_filled = false;

public:
    Circle(double radius=def_radius, string color=def_color, bool filled=def_filled);
    double get_radius() const { return radius; };
    void set_radius(double radius) { this->radius = radius; };
    double get_area() const { return M_PI * radius * radius; };
    double get_perimeter() const { return 2 * M_PI * radius; };
    void print() const;
};

#endif // _CIRCLE_H_