#include <iostream>
#include <cmath>
#include <vector>

int count {};
int num1 {}, num2 {};

void is_in_circle(double, double, double, double, double);
int find_position(double, double, double, int, double);
void swap(int &num1, int &num2);
void print_triangle_floyd(int length);
long long int fibonacci_iterative(int nth_num);
long long int fibonacci_recursive(int nth_num);
long long int power1(int a, int n);
long long int power2(int a, int n);

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    cout << "\nTask 1.\n";
    cout << "Enter the coordinates of the point: ";
    double x_point {0}, y_point {0};
    cin >> x_point >> y_point;
    cout << "Enter the coordinates of the circle's center: ";
    double x_circle {0}, y_circle {0}, radius {0};
    cin >> x_circle >> y_circle;
    do {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if (radius < 0)
            cout << "The radius cannot be negative!" << endl;
    } while (radius < 0);
    is_in_circle(x_point, y_point, x_circle, y_circle, radius);
    cout << "=========================================\n\n";

    cout << "\nTask 2.\n";
    double initial_pos {0}, speed {0}, acceleration {0};
    cout << "Enter the initial position, the speed and the acceleration: ";
    cin >> initial_pos >> speed >> acceleration;
    int iteration {0};
    do {
        cout << "How many times to display the position of the moving body? ";
        cin >> iteration;
        if (iteration < 0)
            cout << "The iteration cannot be negative!" << endl;
    } while (iteration < 0);

    double frequency {0};
    do {
        cout << "How often (in seconds) to update the position of the object? ";
        cin >> frequency;
        if (frequency < 0)
            cout << "The frequency cannot be negative!" << endl;
    } while (frequency < 0);
    
    find_position(initial_pos, speed, acceleration, iteration, frequency);
    cout << "=========================================\n\n";

    cout << "\nTask 3.\n";
    int x {}, y {};
    cout << "Enter two numbers separated by a space: ";
    cin >> x >> y;
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    swap(x, y);
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    cout << "=========================================\n\n";

    cout << "\nTask 4.\n";
    int length {};
    do {
        cout << "How many lines of the Floyd’s triangle do you need? ";
        cin >> length;
        if (length < 0)
            cout << "The length cannot be negative!" << endl;
    } while (length < 0);
    print_triangle_floyd(length);
    cout << "=========================================\n\n";

    cout << "\nTask 5.\n";
    int index {};
    do {
        cout << "Which Fibonacci number do you need? ";
        cin >> index;
        if (index < 0)
            cout << "Negative input is not allowed!" << endl;
    } while (index < 0);
    cout << "The number you seek is " << fibonacci_iterative(index) << endl;
    cout << "======================================\n\n";

    cout << "\nTask 6.\n";
    cout << "The number you seek is " << fibonacci_recursive(index) << endl;
    cout << "The number of recursive calls is " << count << endl;
    cout << "======================================\n\n";

    cout << "\nTask 7.\n";
    int num {}, power {};
    do {
    cout << "Enter an integer and a power separated by a space: ";
    cin >> num >> power;
    if (power < 0)
        cout << "The power can't be negative!" << endl;
    } while (power < 0);
    
    cout << "a is " << num << endl;
    cout << "n is " << power << endl;
    cout << "\nThe first method results:" << endl;
    cout << "a^n is " << power1(num, power) << endl;
    cout << "The number of recursive calls is " << num1 << endl;
    cout << "\nThe second method results:" << endl;
    cout << "a^n is " << power2(num, power) << endl;
    cout << "The number of recursive calls is " << num2 << endl;
    cout << endl;

	return 0;
}

void is_in_circle(double x_point, double y_point,
                  double x_circle, double y_circle, double radius) {
    double point_center_distance {0};
    point_center_distance = sqrt((x_point - x_circle)*(x_point - x_circle)
                                  + (y_point - y_circle)*(y_point - y_circle));
    if (point_center_distance <= radius)
        cout << "The point is inside the circle.\n";
    else
        cout << "The point is not inside the circle.\n";
}

int find_position(double initial_pos, double speed, double acceleration,
                     int iteration, double frequency) {
    cout << "Acceleration: " << acceleration;
    cout << "\nInitial speed: " << speed;
    cout << "\nInitial position: " << initial_pos;
    cout << "\nNumber of times: " << iteration;
    cout << "\nDelta t: " << frequency << endl;

    double position {initial_pos}, time {0};
    int iter {0};
    for (iter = 1; iter <= iteration; iter++) {
        cout << "At time " << time << " the position is " << position << endl;
        time += frequency;
        position = initial_pos + speed*time + 0.5*acceleration*time*time;
    }
    return 0;
}

void swap(int &num1, int &num2) {
    int temp {};
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void print_triangle_floyd(int length) {
    int display_num {};
    for (int row {1}; row<=length; ++row) {
        for (int col {1}; col<=row; ++col)
            cout << ++display_num << " ";

        cout << endl;
    }
}

long long int fibonacci_iterative(int nth_num) {
    vector<long long int> sequence {0, 1};
    long long int ith_num {};
    for (int i {2}; i<=nth_num; ++i) {
        ith_num = sequence.at(i-1) + sequence.at(i-2);
        sequence.push_back(ith_num);
    }
    return sequence.at(nth_num);
}

long long int fibonacci_recursive(int nth_num) {
    ++count;
    if (nth_num <= 1)
        return nth_num;
    else {
        return fibonacci_recursive(nth_num-1) + fibonacci_recursive(nth_num-2);
    }
}

long long int power1(int a, int n) {
    ++num1;
    if (n == 0)
        return 1;
    else
        return a * power1(a, n-1);
}

long long int power2(int a, int n) {
    ++num2;
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int new_power {};
        long long int temp_result {};
        new_power = n / 2;
        temp_result = power2(a, new_power);
        return temp_result * temp_result;
    }
    else {
        int new_power {};
        long long int temp_result {};
        new_power = (n - 1) / 2;
        temp_result = power2(a, new_power);
        return a * temp_result * temp_result;
    }
}
