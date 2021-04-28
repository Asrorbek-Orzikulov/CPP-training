#ifndef _MOVE_H_
#define _MOVE_H_

#include <iostream>

using std::cout;
using std::endl;

class Move {
private:
    int *int_ptr;

public:
    int get_value() {return *int_ptr;};
    void set_value(int num) {*int_ptr = num;};
    Move(int number);
    Move(const Move &source); // Copy constructor
    Move(Move &&source) noexcept;  // Move constructor (noexcept -- for using Move const. while vector grows)
    ~Move(); // Destructor
};

#endif // _MOVE_H_
