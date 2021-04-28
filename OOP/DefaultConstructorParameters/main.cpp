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
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};


Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-argument constructor" << endl;
}


int main() {
    Player empty;
    Player frank {"Frank"};
    Player asror {"Asror", 50};
    Player villain {"Villain", 100, 55};
    return 0;
}
