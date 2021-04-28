#include <iostream>
#include <string>
#include "Player.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void display_active_players() {
    cout << "There are " << Player::get_num_players()
         << " active players." << endl;
}

int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();

    {
        Player frank{"Frank"};
        display_active_players();
    }
    display_active_players();

    Player *enemy = new Player("Enemy");
    display_active_players();
    delete enemy;
    display_active_players();    

    return 0;
}
