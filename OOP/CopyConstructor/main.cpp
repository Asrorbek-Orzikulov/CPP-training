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
    Player(const Player &source); // Copy constructor
    string get_name() {return name;};
    int get_health() {return health;};
    int get_xp() {return xp;}
    ~Player();
};

Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-argument constructor" << endl;
}

Player::Player(const Player &source)
//    : name{source.name}, health{source.health}, xp{source.xp} { // Initialization with source fields
    : Player {source.name, source.health, source.xp} { // Delegating constructor
        cout << "Copying the player: " << source.name << endl;
}

Player::~Player() {
    cout << "Destructing the player: " << name << endl;
}

void display_player(Player p) {
    cout << "The name is: " << p.get_name() << endl;
    cout << "The health is: " << p.get_health() << endl;
    cout << "The xp is: " << p.get_xp() << endl;
}

int main() {
    Player frank {"Frank"};
    display_player(frank);
    Player asror {frank};
    return 0;
}
