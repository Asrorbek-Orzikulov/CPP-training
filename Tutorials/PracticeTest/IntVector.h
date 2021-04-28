#ifndef _INT_VECTOR_H_
#define _INT_VECTOR_H_

#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

class IntVector {
    friend ostream& operator<<(ostream& os, const IntVector& vec);
private:
    int* array;
    int size;
public:
    IntVector(int size);
    IntVector(int* arr, int size);
    IntVector(const IntVector& src);
    ~IntVector() { delete [] array; };
    int maxIndex() const;
    int minIndex() const;
    int maxEven() const;
    double f(int pos) { return sqrt(array[pos-1]); }
    void sortVector();
    void longestDecreasingVec() const;
    int getElemSum() const;

};

#endif // _INT_VECTOR_H_
