#include "PointVector.h"

#include <cmath>

PointVector::PointVector(size_t size)
    : points{new double[size*2] {}}, size{size}
{
};

PointVector::PointVector(double* vec, size_t size)
    : points{new double[size*2] {}}, size{size}
{
    for (size_t i{}; i < size*2; ++i)
        points[i] = vec[i];
};

void PointVector::showMaxX() const {
    double maxX {points[0]}, maxY {points[1]};
    for (size_t i{2}; i < size*2; i+=2)
        if (points[i] > maxX) {
            maxX = points[i];
            maxY = points[i+1];
        }
    cout << "(" << maxX << ", " << maxY << ")" << endl;
};

void PointVector::showDistance() const {
    for (size_t i{}; i < size*2; i+=2)
        for (size_t j{i+2}; j < size*2; j+=2) {
            double dist {};
            dist = sqrt((points[i] - points[j])*(points[i] - points[j]) + 
                        (points[i+1] - points[j+1])*(points[i+1] - points[j+1]));
            cout << "point " << (i/2 + 1) << " - point " 
                 << (j/2 + 1) << ": " << dist << endl;
        }
};

void PointVector::showRisingSubvec() const {
    size_t max_rising_length {1};
    size_t start_index {};
    for (size_t i{}; i < size*2; i+=2) {
        size_t current_length {1};
        for (size_t j{i+2}; j < size*2; j+=2) {
            if (points[j] >= points[j-2])
                ++current_length;
            else {
                if (current_length > max_rising_length) {
                    max_rising_length = current_length;
                    start_index = i;
                }
                break;
            }
        }
    }

    double sumX {};
    cout << "subvector=[";
    for (size_t i{0}; i < max_rising_length-1; ++i) {
        sumX += points[start_index + 2*i];
        cout << "(" << points[start_index + 2*i] << ", " << points[start_index + 2*i + 1] << "), ";
    }
    sumX += points[start_index + (max_rising_length-1)*2];
    cout << "(" << points[start_index + (max_rising_length-1)*2] << ", " 
         << points[start_index + max_rising_length*2 - 1] << ")]" << endl;

    cout << "The sum of x-coordinates: " << sumX << endl;
};

// Overloading the insertion operator
ostream& operator<<(ostream& out, const PointVector& vec) {
    out << "\nvector=[";
    for (size_t i{0}; i < (vec.size-1)*2; i+=2)
        out << "(" << vec.points[i] << ", " << vec.points[i+1] << "), ";
    out << "(" << vec.points[(vec.size-1)*2] << ", " 
        << vec.points[vec.size*2 - 1] << ")]";
    return out;
};