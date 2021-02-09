#include "Circle.h"

Circle::Circle(double radius, string color, bool filled)
    : Shape {color, filled}, radius {radius} {
}

void Circle::print() const {
    cout << "-----------Circle------------" << endl;
    cout << "color: " << get_color() << ", "
         << "filled: " << get_filled() << endl;
    cout << "radius: " << radius << ", area: "
         << get_area() << ", perimeter: "<< get_perimeter() << endl;

    cout << "----------------------------\n" << endl;
}
