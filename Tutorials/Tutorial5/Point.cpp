#include "Point.h"
#include <cmath>

Point::Point(double x_val, double y_val)
    : x {x_val}, y {y_val} {
};

double Point::distance(const Point &other_point) const {
    double x_other {}, y_other {};
    x_other = other_point.get_x();
    y_other = other_point.get_y();
    double distance_squared {};
    distance_squared = (x-x_other)*(x-x_other) + (y-y_other)*(y-y_other);
    return sqrt(distance_squared);
}
