#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    // Vector elements are automatically initialized to 0.
    
    vector <char> vowels;  // empty vector of characters
    vector <int> test_scores;  // empty vector of integers
    
    vector <char> vowels2 (5);  // vector of characters of size 5
    
    vector <char> vowels3 {'a', 'e', 'i', 'o', 'u'}; // vector with initialization
    vector <int> test_scores2 {100, 98, 89, 53, 40};
    vector <double> high_temperatures (365, 80.0); // Vector has size 365 and all initial elements 80.0

    // Vector vs array syntax
    cout << "The second element is " << test_scores2[1] << endl;  // no bounds checking
    cout << "The second element is " << test_scores2.at(1) << endl;  // bounds checking
    
    test_scores2.at(0) = 63;
    cout << "The new first element is " << test_scores2.at(0) << endl;  // no bounds checking

    cout << "================================\n" << endl;
    test_scores2.push_back(80); // append in Python
    cout << "The new element is " << test_scores2.at(5) << endl;
    cout << "The size of the vector is: " << test_scores2.size() << endl;    // size of the vector
    cout << "================================\n" << endl;
    
    // 2-D vectors
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };
    cout << "Movie ratings using array syntax: \n";
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[2][3] << endl;
    
    cout << "Movie ratings using vector syntax: \n";
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(2).at(3) << endl;
    cout << "================================\n" << endl;

	return 0;
}
