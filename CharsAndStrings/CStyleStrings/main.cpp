#include <iostream>
#include <cstring>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    char my_string[80];
    cout << "Length before copying: " << strlen(my_string) << endl;
    cout << "Contents before copying: " << my_string << endl;
    strcpy(my_string, "Hello "); // copying
    cout << "Length after copying: " << strlen(my_string) << endl;
    cout << "Contents after copying: " << my_string << endl;
    strcat(my_string, "there!");  // concatenate
    cout << "Length after concatenation: " << strlen(my_string) << endl; // 11 characters
    cout << "Contents after concatenation: " << my_string << endl; // 11 characters
    cout << strcmp(my_string, "Another hello") << endl;  // Returns 0 if they are similar
    cout << strcmp(my_string, "Hello") << endl;
    
    // Displaying names
    char first_name[20];
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
//    cout << "Garbage data is: " << first_name << endl;     // Will likely display garbage!
//    cout << "Please enter your first name: ";
//    cin >> first_name;
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------" << endl; 
//    
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//
//    strcpy(full_name, first_name);          // copy first_name to full_name
//    strcat(full_name, " ");                       // concatenate full_name and a space
//    strcat(full_name, last_name);           // concatenate last_name to full_name
//    cout << "Your full name is " << full_name << endl;
//    cout << "-------------------------------" << endl;

//    cout << "Enter your full name: ";
//    cin >> full_name; // You will see only the chars before space!
//    cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);  // Gets all chars until 'enter' or length is 50
    cout << "Your full name is " << full_name << endl;
    cout << "-------------------------------" << endl;

    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "-------------------------------" << endl;

    for(size_t i {}; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
    cout << "-------------------------------" << endl;

    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "-------------------------------" << endl;

    cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl;

    cout  << endl;
    return 0;
}
