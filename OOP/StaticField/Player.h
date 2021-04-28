#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player {
private:
    static int num_players;
    string name;

public:
    static int get_num_players();
    Player(string player_name);
    Player(const Player &source); // Copy constructor
    ~Player(); // Destructor
};

#endif // _PLAYER_H_
