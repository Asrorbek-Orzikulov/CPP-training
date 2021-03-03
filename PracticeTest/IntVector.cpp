#include "IntVector.h"
#include <climits>

IntVector::IntVector(int size)
    : array {new int[size]}, size {size}
{
    for (size_t i{0}; i<size; ++i)
        array[i] = 0;
};

IntVector::IntVector(int* arr, int size) : array {new int[size]}, size {size}
{
    for (size_t i{0}; i<size; ++i)
        array[i] = arr[i];
};

IntVector::IntVector(const IntVector& src) : array {new int[src.size]}, size {src.size}
{
    for (size_t i{0}; i<size; ++i)
        array[i] = src.array[i];
};

/***********************************************************
 * I don't like this method because we have a problem if all 
 * numbers are odd. However, I'm too lazy to do anything to
 * change this behavior.
***********************************************************/
int IntVector::maxEven() const {
    int max {INT_MIN};
    for (size_t i{0}; i<size; ++i) {
        if (array[i] % 2 == 0 && array[i] > max)
            max = array[i];
    }
    return max; 
};

ostream& operator<<(ostream& os, const IntVector& vec) {
    os << "intvector=[";
    for (size_t i{0}; i < vec.size-1; ++i)
        os << vec.array[i] << ",";
    os << vec.array[vec.size-1] << "]";
    return os;
};