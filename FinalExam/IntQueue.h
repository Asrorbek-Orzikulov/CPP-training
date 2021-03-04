#ifndef _INT_QUEUE_H
#define _INT_QUEUE_H

#include <iostream>

using namespace std;

class IntQueue {
    friend ostream& operator<<(ostream& os, const IntQueue& vec);
private:
    int nfill;
    int size;
    int back;
    int front;
    int* elems;
public:
    IntQueue(int size);
    IntQueue(const IntQueue& src);
    ~IntQueue() { delete [] elems; }
    void fill(int* arr, int length);
    void reset();
    void empty();
    int* getQ() const { return elems; };
    void remove();
    void add(int num);
};

#endif // _INT_QUEUE_H
