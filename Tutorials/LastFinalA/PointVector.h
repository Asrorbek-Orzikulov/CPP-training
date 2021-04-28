#ifndef _POINT_VECTOR_H_
#define _POINT_VECTOR_H_

#include <iostream>

using namespace std;

class PointVector {
    friend ostream& operator<<(ostream& out, const PointVector& vec);
private:
    double* points;
    size_t size;

public:
    PointVector(size_t size);
    PointVector(double* vec, size_t size);
    ~PointVector() { delete [] points; };
    void showMaxX() const;
    void showDistance() const;
    void showRisingSubvec() const;
};

#endif // _POINT_VECTOR_H_
