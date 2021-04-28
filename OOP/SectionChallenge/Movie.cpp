#include "Movie.h"

Movie::Movie(string name_val, string rating_val, int watched_val)
    : name {new string {name_val}}, 
      rating {new string {rating_val}}, 
      watched {new int {watched_val}} {
}

Movie::Movie(const Movie &source) // Copy constructor
    : Movie {*source.name, *source.rating, *source.watched} {
    cout << "Copy of " << source.name << " is made." << endl;
}

Movie::Movie(Movie &&source) noexcept // Move constructor
    : name {source.name},
      rating {source.rating},
      watched {source.watched} {
          source.name = nullptr;
          source.rating = nullptr;
          source.watched = nullptr;
    cout << "Moving the movie " << *name << "." << endl;
}

Movie::~Movie() {
    if (name == nullptr)
        cout << "Deleting the movie nullptr." << endl;
    else
        cout << "Deleting the movie " << *name << "." << endl;
    delete name;
    delete rating;
    delete watched;
}

void Movie::display() const {
    cout << *name << ", " << *rating << ", " << *watched << endl;
}
