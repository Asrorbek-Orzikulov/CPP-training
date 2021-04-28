#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player {
private:
    string name {"XXXXXXX"};
    int health;
    int xp;

public:
// Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player {"None", 0, 0} {
        cout << "No-argument constructor" << endl;

}

Player::Player(string name_val)
    : Player {name_val, 0, 0} {
        cout << "One-argument constructor" << endl;
}

Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-argument constructor" << endl;
}

int main() {
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    return 0;
}
