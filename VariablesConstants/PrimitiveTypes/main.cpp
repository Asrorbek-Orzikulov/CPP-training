#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    /******************************************
     * Character type
     *****************************************/
    char middle_char {'R'};
    cout << "The middle letter is " << middle_char << endl;


    /******************************************
     * Integer type
     *****************************************/
    unsigned short exam_score {55}; // Non-negative integer up to 65,535
    cout << "My exam score is " << exam_score << "." << endl;
    
    int num_countries {65}; // Integer between -2,147,483,648 and 2,147,483,647
    cout << "Members of " << num_countries << " countries came to Uzb." << endl;
    
    long people_in_florida {20'610'000};  // Between -2,147,483,648 to 2,147,483,647
    cout << "There are about " << people_in_florida
         << " people in the state of Florida." << endl;
         
    long people_on_earth {7'600'000'000};
    cout << "The population of the Earth is "
         << people_on_earth << endl;

    long distance_to_mars {9'000'000'000'000'111'222};
    cout << "The distance to Mars is "
         << distance_to_mars << endl;


    /******************************************
     * Double type
     *****************************************/
    float car_payment {143.1968585};
    cout << "The car payment is " << car_payment << endl;
     
    double large_distance {4.39e50};
    cout << "A large distance is " << large_distance << endl;
    
    long double very_large_distance {2.72e307};
    cout << "A very large distance is " << very_large_distance << endl;
    

    /******************************************
     * Boolean type
     *****************************************/
    bool game_over {false};
    cout << "The state of the game is " << game_over << endl;
    
	return 0;
}
