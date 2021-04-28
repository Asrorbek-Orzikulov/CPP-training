#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>

using std::cout;
using std::endl;

class Player {
private:
    int *int_ptr;

public:
    int get_value() {return *int_ptr;};
    void set_value(int num) {*int_ptr = num;};
    Player(int number);
    Player(const Player &source); // Copy constructor
    ~Player(); // Destructor
};

#endif // _PLAYER_H_
