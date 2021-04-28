#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int scores [] {100, 89, 92};
    for (int score: scores)
        cout << score << endl;
    cout << "==========================" << endl;
    
    for (auto score: scores)
        cout << score << endl;
    cout << "==========================" << endl;
    
    for (auto c: "Asrorbek")
        cout << "The character is: " << c << endl;
        cout << "==========================" << endl;

	return 0;
}
