#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const double pi {3.14159};
void area_circle();
void volume_cylinder();
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);

int main() {
    
    area_circle();
    area_circle();
    volume_cylinder();
    
    return 0;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
