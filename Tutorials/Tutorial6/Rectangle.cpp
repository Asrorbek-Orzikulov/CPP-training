#include "Rectangle.h"

Rectangle::Rectangle()
    : Rectangle {def_width, def_length, def_color, def_filled} {
}

Rectangle::Rectangle(double width, double length)
    : Rectangle {width, length, def_color, def_filled} {
}

Rectangle::Rectangle(double width, double length, string color, bool filled)
    : Shape {color, filled}, width {width}, length {length} {
}

void Rectangle::print() const {
    cout << "-----------Rectangle------------" << endl;
    cout << "color: " << get_color() << ", "
         << "filled: " << get_filled() << endl;
    cout << "width: " << width << ", "
         << "length: " << length << endl;
    cout << "area: " << get_area() << ", "
         << "perimeter: " << get_perimeter() << endl;
    cout << "--------------------------------\n" << endl;
}