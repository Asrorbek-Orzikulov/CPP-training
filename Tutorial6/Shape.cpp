#include "Shape.h"

Shape::Shape()
    : color {"green"}, filled {false} {
}

Shape::Shape(string color, bool filled)
    : color {color}, filled {filled} {
}

void Shape::print() const {
    cout << "-----------Shape------------" << endl;
    cout << "color: " << color << ", "
         << "filled: " << filled << endl;

    cout << "----------------------------\n" << endl;
}
