#include "Player.h"

Player::Player(int number)
    : int_ptr {nullptr} {
        int_ptr = new int {number};
}

Player::Player(const Player &source) { // Deep-copy constructor
    int_ptr = new int {*source.int_ptr};
    cout << "Copying the player -- Deep." << endl;
}

//Player::Player(const Player &source) // Alternative deep-copy constructor
//    : Player {*source.int_ptr} {
//        cout << "Copying the player -- Deep." << endl;
//}

Player::~Player() {
    cout << "Destructing the player." << endl;
    delete int_ptr;
}
