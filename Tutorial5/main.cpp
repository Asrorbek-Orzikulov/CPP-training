#include <iostream>
#include <string>
#include "HelperFunctions.h"
#include "Point.h"
#include "Circle.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::boolalpha;

int main() {
    cout << "\nTask 1\n===================================\n";
    string str_to_check {};
    cout << "Enter a string to check: ";
    cin >> str_to_check;
    cout << boolalpha;
    cout << "The claim that the string contains only digits is " 
         << is_digit(str_to_check) << "." <<endl;

    cout << "\nTask 2a\n===================================\n";
    cout << "Enter a string to check: ";
    cin >> str_to_check;
    cout << "Enter one or more characters to find in the string: ";
    string chars {};
    cin >> chars;
    cout << chars << " is present " << count_occurence(str_to_check, chars)
         << " times in the string." << endl;

    cout << "\nTask 2b\n===================================\n";
    char array [] {"dfdabf8987ffabuutab7"};
    chars = "ab";
    cout << chars << " is present " << count_occurence(array, chars)
         << " times in the array of characters." << endl;

    cout << "\nTask 3\n===================================\n";
    double x_current {}, y_current {};
    cout << "Enter x and y coordinates of the current point: ";
    cin >> x_current >> y_current;
    double x_other {}, y_other {};
    cout << "Enter x and y coordinates of another point: ";
    cin >> x_other >> y_other;
    Point current {x_current, y_current};
    Point other {x_other, y_other};
    cout << "The distance between the two points is "
         << current.distance(other) << "." << endl;

    cout << "\nTask 4\n===================================\n";
    double x_center {}, y_center {};
    cout << "Enter x and y coordinates of the circle center: ";
    cin >> x_center >> y_center;
    double radius {};
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle my_circle {Point {x_center, y_center}, radius};

    cout << "The area of the circle is: " << my_circle.area() << endl;
    cout << "The circumference of the circle is: " 
         << my_circle.circumference() << endl;

    double x_check {}, y_check {};
    cout << "Enter x and y coordinates of a point: ";
    cin >> x_check >> y_check;
    if (my_circle.is_inside(Point {x_check, y_check}))
        cout << "The point is inside the circle.\n";
    else
        cout << "The point is not inside the circle.\n";

    return 0;
}
