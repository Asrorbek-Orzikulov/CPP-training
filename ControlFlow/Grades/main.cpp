#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Enter your exam score (0-100): ";
    int score {};
    cin >> score;
    if (score < 0 || score > 100)
        cout << "Sorry, " << score << " is not a valid score.\n";
    else {
        char letter_grade {};
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else if (score >= 50)
            letter_grade = 'E';
        else
            letter_grade = 'F';
            
        cout << "Your grade is " << letter_grade << endl;
        if (letter_grade == 'F')
            cout << "You have to redo the course." << endl;
        else
            cout << "Congrats! You passed the course." << endl;
    }

	return 0;
}
