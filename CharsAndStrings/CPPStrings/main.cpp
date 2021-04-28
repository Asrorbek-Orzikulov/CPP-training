#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string s0;   // Emptry string by default
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple stored in another memory location
    string s6 {s1, 0, 3};   // App  3 characters from the position 0
    string s7 (10, 'X');    // XXXXXXXXXX (10 X's)
    
    cout << s0 << endl;                  // No garbage
    cout << s0.length() << endl;     // empty string

    // Initialization
    cout << "\nInitialization" << "\n------------------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    
    // Comparison
    cout << "\nComparison" << "\n------------------------------------------" << endl;
    cout << std::boolalpha;
    cout << s1  << " == " << s5 << ": " << (s1 == s5) << endl; 		            // True    Apple == Apple
    cout << s1  << " == " << s2 << ": " << (s1 == s2) << endl;	            	// False   Apple != Banana
    cout << s1  << " != " << s2 << ": " << (s1 != s2) << endl;		            // True    Apple != Banana
    cout << s1  << " < " << s2 << ": " << (s1 < s2) << endl;;		            // True         Apple < Banana
    cout << s2  << " > " << s1 << ": " <<(s2 > s1) << endl;		            // True         Banana > Apple
    cout << s4  << " < " << s5 << ": " <<(s4 < s5) << endl;		            // False        apple >Apple
    cout << s1  << " == " << "Apple" << ": " <<(s1 == "Apple") << endl;;	        // True Apple == Apple

    // Assignment 
    cout << "\nAssignment" << "\n------------------------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;    // Watermelon
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;    // Watermelon

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;    // Frank

    s3[0] = 'C';    // Crank
    cout << "s3 change first letter to 'C': "  << s3 << endl;   //Crank
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': "  << s3 << endl;   // Prank

    // Concatenation
    s3 = "Watermelon";
    cout << "\nConcatenation" << "\n------------------------------------------" << endl;

    s3 =  s5 + " and " + s2 + " juice";     // Apple and Watermelon juice
    cout << "s3 is now: " << s3 << endl;    // Apple and Watermelon Juice
    
//    s3 = "nice " + " cold " + s5 + "juice";         // Compiler error: 2 C-style strings

    // for loop and length
    cout << "\nLooping" << "\n------------------------------------------" << endl;

    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); ++i) 
        cout << s1.at(i);      //  or s1[i]  --> Apple
    cout << endl;

    // Range-based for loop
    for (char  c: s1)
        cout << c;     // Apple 
    cout << endl;


    // Substring
    cout << "\nSubstring" << "\n------------------------------------------" << endl;

    s1 = "This is a test";
    cout << s1.substr(0,4) << endl;	    // This
    cout << s1.substr(5,2) << endl;	    // is
    cout << s1.substr(10,4) << endl;   	// test


    // Erase method
    cout << "\nErase" << "\n------------------------------------------" << endl;

    s1 = "This is a test";
    s1.erase(0,5);     // Erase this from s1 results in "is a test"
    cout << "s1 is now: " << s1<< endl;     // is a test

    // getline function
    cout << "\ngetline" << "\n------------------------------------------" << endl;

    string full_name {};
    cout << "Enter your full name: ";
    getline(cin, full_name);  // Getting all elements (including a space)
    cout << "Your full name is: " << full_name << endl;
    
    cout << "\ngetline with termination" << "\n------------------------------------------" << endl;
    cout << "Enter your full name: ";
    getline(cin, full_name, 'i');
    cout << "Your full name is: " << full_name << endl;

    // Find method
    cout << "\nfind" << "\n------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word {};
    cout << "Enter the word to find: ";
    cin >> word;
    size_t position {s1.find(word)};
    if (position != string::npos)  // if the word is found
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word <<  " not found" << endl;

    // Clear method
    cout << "\nClear" << "\n------------------------------------------" << endl;
    cout << "s1 before clearing: " << s1 << endl;
    s1.clear();
    cout << "s1 after clearing: " << s1 << endl;
    
    // Replace method
    cout << "\nReplace" << "\n------------------------------------------" << endl;
    cout << "Full name before replacing: " << full_name << endl;
    full_name.replace(3, 7, "NEW TEXT TO USE");
    cout << "Full name after replacing: " << full_name << endl;

    cout << endl;
    return 0;
}
