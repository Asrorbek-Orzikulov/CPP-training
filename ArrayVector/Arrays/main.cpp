#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int test_scores [5];  // array of size 5 consisting of integers
    cout << "The first score is " << test_scores[0] << endl;
    cout << "The last score is " << test_scores[4] << endl; // uninitialized 
    
    const short days_in_year {365}; // declearing a constant
    short hi_temperatures [days_in_year]; // and then using it as array size
    cout << "Random high temperature is " << hi_temperatures[300] << endl;
    
    int test_scores2 [5] {100, 95, 90, 85, 80}; // array of size 5 with initialized values
    cout << test_scores2 << endl;
    cout << "First test score is " << test_scores2[0] << endl;
    cout << "Last test score is " << test_scores2[5-1] << endl;
    test_scores2[0] = 105; // changing the first element
    cout << "Updated first score is " << test_scores2[0] << endl;
    
    int test_scores3 [5] {3, 5}; // first two elements are 3 and 5. Others are 0.
    cout << test_scores3 << endl;
    
    short hi_temperatures2 [days_in_year] {0}; // init all to zero
    cout << "Random high temperature is " << hi_temperatures2[300] << endl;
    
    int test_scores4 [] {1, 2, 3, 4, 5};   // size is inferred from the length of init
    cout << test_scores4 << endl;
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
//    cin >> vowels[5]; // Out of bounds. However, it doesn't raise an error!!! Very dangerous!
    
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols]  // 2-dimensional array
    {
        {0, 4, 3, 5},
        {2, 5, 1, 0},
        {0, 2, 5, 5}
    };
    cout << movie_rating[2][3] << endl;
    
	return 0;
}
