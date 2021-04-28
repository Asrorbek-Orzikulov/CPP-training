#include "Square.h"

Square::Square(double side, string color, bool filled)
    : Rectangle {side, side, color, filled} {
}

void Square::set_length(double side) {
    Rectangle::set_length(side);
    Rectangle::set_width(side);
}

void Square::set_width(double side) {
    this->set_length(side);
}

void Square::print() const {
    cout << "-----------Square------------" << endl;
    cout << "color: " << get_color() << ", "
         << "filled: " << get_filled() << ", "
         << "side: " << get_width() << endl;
    cout << "area: " << get_area() << ", "
         << "perimeter: " << get_perimeter() << endl;
    cout << "-----------------------------\n" << endl;
}


