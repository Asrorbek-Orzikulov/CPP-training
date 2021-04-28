#include "Movies.h"
#include "Movie.h"

Movies::Movies()
    : movies {} {
}

Movies::~Movies() {
    cout << "\n================================\n";
    cout << "Destruction has started." << endl;
    movies.clear();
    cout << "Movies collection has been destructed.\n" << endl;
}

void Movies::display() const {
    cout << "\n================================\n";
    for (const Movie &mov: movies)
        mov.display();
    cout << "There are " << movies.size() << " movies." << endl;
    cout << "================================\n" << endl;
}

void Movies::increment_watched(string name) {
    for (Movie &mov: movies) {
        if (*mov.name == name) {
            *mov.watched += 1;
            cout << name << " has been incremented." << endl;
            return;
        }
    }
    cout << name << " not found." << endl;
}

void Movies::add_movie(string name, string rating, int watched) {
    bool present {false};
    for (const Movie &mov: movies) {
        if (mov.get_name() == name) {
            present = true;
            break;
        }
    }
    if (not present) {
        movies.push_back(Movie{name, rating, watched});
        cout << name << " has been added." << endl;
    } else
        cout << name << " is already present." << endl;
}