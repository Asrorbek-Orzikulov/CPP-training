#include "Player.h"

Player::Player(int number)
    : int_ptr {nullptr} {
        int_ptr = new int {number};
}

Player::Player(const Player &source)
    : int_ptr {source.int_ptr} {
        cout << "Copying the player -- Shallow." << endl;
}

Player::~Player() {
    cout << "Destructing the player." << endl;
    delete int_ptr;
}

