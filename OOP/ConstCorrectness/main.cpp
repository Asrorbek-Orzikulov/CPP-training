#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    string get_name() const {return this->name;};
    void set_name(string new_name) {this->name = new_name;};
};


Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

void display_player_name(const Player &player) {
    cout << "My name is " << player.get_name() << endl; // doesn't work unless .get_name() is const
}

int main() {
    Player asror {"Asror", 50};
    cout << "My name is " << asror.get_name() << endl;
    asror.set_name("Abror");
    cout << "My new name is " << asror.get_name() << endl;

    const Player villain {"Villain", 100, 55};
//    villain.set_name("Hero");  // This statement never works
    cout << "My name is " << villain.get_name() << endl; // This statement doesn't work unless .get_name() is const
    display_player_name(villain);
    return 0;
}
