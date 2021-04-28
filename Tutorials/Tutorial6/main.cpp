#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::boolalpha;

int main() {
    // Shape
    cout << boolalpha << endl;
    Shape shape1 {};
    shape1.print();

    Shape shape2 {"yellow", true};
    shape2.print();

    cout << "The color is: " << shape2.get_color() << endl;
    cout << "The filled is: " << shape2.get_filled() << endl;
    shape2.set_color("brown");
    shape2.set_filled(false);
    shape2.print();

    // Circle
    Circle circle1;
    circle1.print();

    Circle circle2 {2.5};
    circle2.print();

    Circle circle3 {3.0, "black", true};
    circle3.print();

    cout << "Prints 1: " << circle1.get_radius() << endl;
    cout << "Prints 15.7: " << circle2.get_perimeter() << endl;
    cout << "Prints 28.3: " << circle3.get_area() << endl;

    // Rectangle
    Rectangle rec1 {};
    rec1.print();
    Rectangle rec2 {3.5, 5.0};
    rec2.print();
    Rectangle rec3 {2.5, 4, "red", true};
    rec3.print();

    rec1.set_width(3);
    cout << "Prints 3: " << rec1.get_width() << endl;
    cout << "Prints 1: " << rec1.get_length() << endl;

    rec2.set_length(1.5);
    cout << "Prints 3.5: " << rec2.get_width() << endl;
    cout << "Prints 1.5: " << rec2.get_length() << endl;

    // Square
    Square sqr1;
    sqr1.print();
    Square sqr2 {2.5};
    sqr2.print();
    Square sqr3 {4, "indigo", false};
    sqr3.print();

    sqr1.set_length(5);
    sqr1.print();

    sqr2.set_width(1);
    sqr2.print();

    // Array of Shape objects
    cout << "===================================\n" << endl;
    Shape *shapes[4] {};
    shapes[0] = &shape2;
    shapes[1] = &circle3;
    shapes[2] = &rec3;
    shapes[3] = &sqr3;

    for (size_t i{}; i<4; ++i)
        shapes[i]->print();

    // Square as a Rectangle
    Rectangle *rec {nullptr};
    rec = &sqr2;
    rec->print();
    rec->set_length(10);
    rec->print();
    return 0;
}
