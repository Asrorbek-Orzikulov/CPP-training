#include "IntQueue.h"

IntQueue::IntQueue(int size) : nfill {0}, size {size}, back{0}, front{0}, elems{new int[size]}
{
    for (int i{}; i<size; ++i)
        elems[i] = 0;
}

IntQueue::IntQueue(const IntQueue& src) : nfill {src.nfill}, size{src.size}, back{src.back}, front{src.front}, elems{new int[size]}
{
    for (int i{}; i<size; ++i)
        elems[i] = src.elems[i];
}

void IntQueue::fill(int* arr, int length) {
    front = 0;
    nfill = length;
    back = length%size;
    for (int i{}; i<length; ++i)
        elems[i] = arr[i];

    for (int i{length}; i<size; ++i)
        elems[i] = 0;
}

void IntQueue::reset() {
    front = back = nfill = 0;
    for (int i{}; i<size; ++i)
        elems[i] = 0;
}

void IntQueue::empty() {
    front = back = nfill = 0;
}

void IntQueue::remove() {
    front = (front + 1) % size;
    --nfill;
}

void IntQueue::add(int num) {
    nfill++;
    elems[back] = num;
    back = (back + 1) % size;
}

ostream& operator<<(ostream& os, const IntQueue& que) {
    os << "IntQueue=[{";
    for (int i{0}; i < que.size-1; ++i)
        os << que.elems[i] << ",";
    os << que.elems[que.size-1] << "}, ";

    os << "front: " << que.front << ", back: " << que.back
       << ", nfill: " << que.nfill 
       << ", size: " << que.size << "]";
    return os;
};