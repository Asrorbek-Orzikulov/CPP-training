#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};

    // methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};


int main() {
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    // Array of Player objects
    Player players[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;
    delete enemy;

    return 0;
}
