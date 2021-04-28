#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    int scores[] {100, 95, 89};
    cout << "Value of scores: " << scores << endl;
    cout << "Value of scores + 1: " << scores + 1 << endl;     
    cout << "Value of scores + 2: " << scores + 2 << endl;     
    cout << endl;

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;
    cout << "Value of score_ptr + 1: " << score_ptr + 1 << endl;
    cout << "Value of score_ptr + 2: " << 
    score_ptr + 2 << endl;
    cout << endl;

    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout << endl;
    return 0;
}

