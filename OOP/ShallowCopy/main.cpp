#include <iostream>
#include "Player.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void display_player(Player p) {
    cout << "The number is: " << p.get_value() << endl;
}

int main() {
    Player frank {1050};
    display_player(frank); // After this, memory on the heap is released
    frank.set_value(300);  // Very dangerous since the memory has been released
    return 0;  // raises an error since frank.int_ptr points to an invalid (freed) location
}
