#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
using std::vector;
using std::string;

class Movie;

class Movies {
private:
    vector<Movie> movies;
public:
    Movies();
    ~Movies();

    /**********************************************************************
    displaying all the movie objects in the movies vector.

    For each movie, calls the movie.display method so that the movie
    object displays itself
    *********************************************************************/
    void display() const;

    /*********************************************************************
    increment_watched expects the name of the movie to increment the
    watched count.

    It will search the movies vector to see if a movie object with the
    same name already exists.
    If it does, then increments that object's watched by 1.
    Otherwise, prints a message that no such movie exists.
    *********************************************************************/
    void increment_watched(string name);

    /*********************************************************************
    add_movie expects the name of the movie, rating and watched count

    It will search the movies vector to see if a movie object with 
    the same name already exists.
    If it does, it prints a message that the movie already exists.
    Otherwise, it creates a movie object from the provided information
    and adds that movie object to the movies vector.
    *********************************************************************/
    void add_movie(string name, string rating, int watched);
};

#endif // _MOVIES_H_
