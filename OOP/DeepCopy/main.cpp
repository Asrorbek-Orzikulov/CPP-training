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
    display_player(frank);
    Player asror {frank};
    frank.set_value(300);  // Data of asror is unchanged
    cout << "Frank's value is: " << frank.get_value() << endl;
    cout << "Asror's value is: " << asror.get_value() << endl;
    return 0;
}
