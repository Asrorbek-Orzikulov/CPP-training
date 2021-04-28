#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << endl;
    int high_score {100};
    int low_score {65};
    const int *score_ptr {&high_score};  // pointer to a constant
    
    high_score = 120;  // No error, since using var-name directly
    cout << "high_score has been changed to " << high_score << endl;
//    *score_ptr = 86;  // Error, since we are pointing to a constant
    score_ptr = &low_score; // Okay to use
    
    int *const score_ptr2 {&high_score};  // constant pointer
    *score_ptr2 = 86; // Okay to use
    cout << "high_score has been changed to " << high_score << endl;
//    score_ptr2 = &low_score; // Error, the pointer can't be reassigned

    const int *const score_ptr3 {&high_score}; // constant pointer pointing to constant
    high_score = 111;  // No error, since using var-name directly
    cout << "high_score has been changed to " << high_score << endl;
//    *score_ptr3 = 77; // Error, since we are pointing to a constant
//    score_ptr3 = &low_score; // Error, the pointer can't be reassigned

    cout << endl;
	return 0;
}
