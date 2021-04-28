#include "Player.h"

int Player::num_players {0};

Player::Player(string player_name)
    : name {player_name} {
        num_players++;
}

Player::Player(const Player &source) // A deep-copy constructor
    : Player {source.name} {
        cout << "Copying the player -- Deep." << endl;
}

Player::~Player() {
    cout << "Destructing the player." << endl;
    num_players--;
}

int Player::get_num_players() {
    return num_players;
}
