#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>
#include "Movies.h"

using std::string;
using std::cout;
using std::endl;

class Movie {
friend void Movies::increment_watched(string name);  // Only this method has access to private fields

private:
    string *name;
    string *rating;
    int *watched;

public:
    Movie(string name_val, string rating_val, int watched_val);
    Movie(const Movie &source); // Copy constructor
    Movie(Movie &&source) noexcept; // Move constructor
    ~Movie(); // Destructor
    string get_name() const {return *name;};

    /********************************************************************
    displaying the name, rating, and watch count of a movie object.
    *********************************************************************/
    void display() const;
};

#endif // _MOVIE_H_
