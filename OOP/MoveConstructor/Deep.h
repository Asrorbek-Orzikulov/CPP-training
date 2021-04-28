#ifndef _DEEP_H_
#define _DEEP_H_

#include <iostream>

using std::cout;
using std::endl;

class Deep {
private:
    int *int_ptr;

public:
    int get_value() {return *int_ptr;};
    void set_value(int num) {*int_ptr = num;};
    Deep(int number);
    Deep(const Deep &source); // Copy constructor
    ~Deep(); // Destructor
};

#endif // _DEEP_H_
