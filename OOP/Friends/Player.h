#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include "Other_class.h"

class Friend_class;

class Player {
    friend void Other_class::display_player(const Player &p); // One method of Other_class
    friend void display_player(const Player &p);  // Function in main.cpp
    friend class Friend_class;  // All methods of Friend_class can access private elements
private:
   static int num_players;
   std::string name;
   int health;
   int xp;
public:
    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;} 
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);  // Copy constructor
    ~Player();  // Destructor
    static int get_num_players();
};

#endif // _PLAYER_H_
