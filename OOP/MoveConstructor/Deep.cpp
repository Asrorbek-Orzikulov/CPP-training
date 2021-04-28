#include "Deep.h"

Deep::Deep(int number)
    : int_ptr {nullptr} {
        int_ptr = new int {number};
        cout << "Constructing the number: " << *int_ptr << endl;
}

Deep::Deep(const Deep &source) { // Deep-copy constructor
    int_ptr = new int {*source.int_ptr};
    cout << "Deep copying the number: " << *int_ptr << endl;
}

//Deep::Deep(const Deep &source) // Alternative deep-copy constructor
//    : Deep {*source.int_ptr} {
//        cout << "Deep copying the number: " << *int_ptr << endl;
//}

Deep::~Deep() {
    cout << "Destructing the number: " << *int_ptr << endl;
    delete int_ptr;
}