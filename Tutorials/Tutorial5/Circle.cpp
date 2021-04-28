#include "Circle.h"
#include <cmath>

Circle::Circle(const Point &point, double radius_val)
    : center {point}, radius {radius_val} { // Using an implicit copy constructor
}

double Circle::circumference() const {
    return 2 * M_PI * radius;
}

double Circle::area() const {
    return M_PI * radius * radius;
}

bool Circle::is_inside(const Point &point) {
    double dist {};
    dist = center.distance(point);
    return (dist <= radius);
}