#include <iostream>
#include <string>
#include "Movies.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    Movies my_movies;
    my_movies.display();

    my_movies.add_movie("Big", "PG-13",2);                 // OK
    my_movies.add_movie("Star Wars", "PG",5);             // OK
    my_movies.add_movie("Cinderella", "PG",7);           // OK
    my_movies.display();   // Big, Star Wars, Cinderella
    
    my_movies.add_movie("Cinderella", "PG",7);            // Already exists
    my_movies.add_movie("Ice Age", "PG",12);              // OK
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    my_movies.increment_watched("Big");                    // OK
    my_movies.increment_watched("Ice Age");              // OK
    my_movies.display();    // Big and Ice Age watched count incremented by 1

    my_movies.increment_watched("XXX");         // XXX not found

	return 0;
}
