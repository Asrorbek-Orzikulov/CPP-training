#include <iostream>

using std::cin;  // using only what I need
using std::cout;
using std::endl;

int main(){
    int fav_number;
	cout << "Enter your favourite number between 1 and 100: ";
    cin >> fav_number;
    cout << "Amazing!!! That's my favourite number too!" << endl;
    cout << "No, really!!, " << fav_number << " is my favourite number!" << endl;
	return 0;
}
