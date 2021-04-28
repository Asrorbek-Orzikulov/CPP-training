#include <iostream>
#include "PointVector.h"

int main() {
    double vector[] {1.5, 1, 4.5, 1, 4.5, 5};
    PointVector point1 {vector, 3};
    cout << point1 << endl;
    cout << "The point with the largest x is: ";
    point1.showMaxX();
    point1.showDistance();
    
    cout << "\nTesting the sub-vector method" << endl;
    double vector2[] {2.5, 1, 1.5, 1, 4.5, 5, 5, 5, 1, 2};
    PointVector point2 {vector2, 5};
    point2.showRisingSubvec();
    cout << endl;

    return 0;
};