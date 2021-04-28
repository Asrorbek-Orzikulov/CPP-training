#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    Circle(const Point &point, double radius_val);

    /*******************************************************************
    This method returns the circumference of the circle.
    ********************************************************************/
    double circumference() const;

    /*******************************************************************
    This method returns the area of the circle.
    ********************************************************************/
    double area() const;

    /*******************************************************************
    This method expects:
    point - a Point object

    The method returns true if a given point is contained in the circle.
    Otherwise, returns false.
    ********************************************************************/
    bool is_inside(const Point &point);
};

#endif // _CIRCLE_H_

