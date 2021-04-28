#include "Move.h"

Move::Move(int number)
    : int_ptr {nullptr} {
        int_ptr = new int {number};
        cout << "Constructing the number: " << *int_ptr << endl;
}

Move::Move(const Move &source) { // Deep-copy constructor
    int_ptr = new int {*source.int_ptr};
    cout << "Deep copying the number: " << *int_ptr << endl;
}

Move::Move(Move &&source) noexcept // Move constructor
    : int_ptr {source.int_ptr} {
        source.int_ptr = nullptr;
        cout << "Moving the number: " << *int_ptr << endl;
}

Move::~Move() {
    if (int_ptr == nullptr)
        cout << "Destructing the nullptr" << endl;
    else
        cout << "Destructing the number: " << *int_ptr << endl;
    delete int_ptr;
}
