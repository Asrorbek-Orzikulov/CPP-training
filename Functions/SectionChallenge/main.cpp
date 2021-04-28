// Section 11
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void display_menu();
char process_input();
void print_data(const vector<int> &numbers);
void add_number(vector<int> &numbers);
void compute_mean(const vector<int> &numbers);
void compute_min(const vector<int> &numbers);
void compute_max(const vector<int> &numbers);

int main(){
    bool done {false};
    vector<int> data {};
    char input {};
    do {
        display_menu();
        input = process_input();
        switch (input) {
            case 'Q':
                cout << "Program terminated. Goodbye!\n" << endl;
                done = true;
                break;
            case 'P':
                print_data(data);
                break;
            case 'A': {
                add_number(data);
                break;
            }
            case 'M':
                compute_mean(data);
                break;
            case 'S': {
                compute_min(data);
                break;
            }
            case 'L': {
                compute_max(data);
                break;
            }
            default:
                cout << "Illegal input. Try again." << endl;
        }
    } while (!done);
    return 0;
}

void display_menu() {
    cout << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char process_input() {
    char input {};
    cout << "\nEnter your choice: ";
    cin >> input;
    return toupper(input);
}

void add_number(vector<int> &numbers) {
    int num {};
    cout << "Enter an integer to add: ";
    cin >> num;
    numbers.push_back(num);
    cout << num << " added" << endl;
}

void print_data(const vector<int> &numbers) {
    if (numbers.size() == 0)
        cout << "[] - the list is empty" << endl;
    else {
        cout << "[ ";
        for (auto val: numbers)
            cout << val << " ";
        cout << "]" << endl;
    }
}

void compute_mean(const vector<int> &numbers) {
    if (numbers.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else {
        int sum {};
        for (int val: numbers)
            sum += val;

        double mean {};
        mean = static_cast<double>(sum) / numbers.size();
        cout << "The mean is " << mean << endl;        
    }
}

void compute_min(const vector<int> &numbers) {
    if (numbers.size() == 0)
        cout << "Unable to determine the smallest number - list is empty" << endl;
    else {
        int min {numbers.at(0)};
        for (int val: numbers)
            if (val < min)
                min = val;

        cout << "The smallest number is " << min << endl;
    }
}
void compute_max(const vector<int> &numbers) {
    if (numbers.size() == 0)
        cout << "Unable to determine the largest number - list is empty" << endl;
    else {
        int max {numbers.at(0)};
        for (int val: numbers)
            if (val > max)
                max = val;
         cout << "The largest number is " << max << endl;
    }
}