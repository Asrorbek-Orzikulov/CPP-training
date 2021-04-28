#ifndef _POINT_H_
#define _POINT_H_

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val = 0, double y_val = 0);
    double get_x() const {return x;};
    double get_y() const {return y;};

    /*******************************************************************
    This method expects:
    other_point - a Point object

    The method returns the distance from the current point to the
    `other_point`.
    ********************************************************************/
    double distance(const Point &other_point) const;
};

#endif // _POINT_H_
