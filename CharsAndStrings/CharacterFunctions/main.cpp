#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::boolalpha;

int main() {

    // Testing characters
    char c {'a'};
    cout << boolalpha;
    cout << isalpha(c) << endl; // True if c is a letter
    cout << isalnum(c) << endl; // True if c is a letter or digit
    cout << isdigit(c) << endl; // True if c is a digit
    cout << islower(c) << endl; // True if c is a lowercase letter
    cout << isupper(c) << endl; // True if c is an uppercase letter
    cout << isprint(c) << endl; // True if c is a printable character
    cout << ispunct(c) << endl; // True if c is a punctuation character
    cout << isspace(c) << endl; // True if c is whitespace

    // Converting characters
    cout << toupper(c) << endl; // Making an uppercase letter
    cout << tolower(c) << endl; // Making a lowercase letter

    return 0;
}
