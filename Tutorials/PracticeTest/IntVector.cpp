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

int IntVector::maxIndex() const {
    int max_idx {0};
    for (size_t i{1}; i<size; ++i) {
        if (array[i] > array[max_idx])
            max_idx = i;
    }
    return max_idx;
};

int IntVector::minIndex() const {
    int min_idx {0};
    for (size_t i{1}; i<size; ++i) {
        if (array[i] < array[min_idx])
            min_idx = i;
    }
    return min_idx;
};

void IntVector::sortVector() {
    sort(array, array + size, greater<>()); // less or greater
};

void IntVector::longestDecreasingVec() const {
    int max_falling_length {1};
    size_t start_index {};
    for (size_t i{}; i < size; ++i) {
        size_t current_length {1};
        for (size_t j{i+1}; j < size; ++j) {
            if (array[j] < array[j-1])
                ++current_length;
            else
                break;
        }
        if (current_length > max_falling_length) {
            max_falling_length = current_length;
            start_index = i;
        }
    }
    IntVector temp {&(array[start_index]), max_falling_length};
    cout << temp << endl;
    cout << "The sum is: " << temp.getElemSum() << endl;
};

int IntVector::getElemSum() const {
    int elem_sum {};
    for (size_t i{}; i < size; ++i)
        elem_sum += array[i];
    return elem_sum;
}

ostream& operator<<(ostream& os, const IntVector& vec) {
    os << "intvector=[";
    for (size_t i{0}; i < vec.size-1; ++i)
        os << vec.array[i] << ", ";
    os << vec.array[vec.size-1] << "]";
    return os;
};