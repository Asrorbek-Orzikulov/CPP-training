#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <int> vector1, vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << " and " << vector1.at(1) << endl;
    cout << "The size of the first vector is " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << " and " << vector2.at(1) << endl;
    cout << "The size of the second vector is " << vector2.size() << endl;
    cout << "===================================\n" << endl;
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << "===================================\n" << endl;

    cout << "Change in 2-D vector after 1-D component changes\n";
    vector1.at(0) = 1000;
    cout << vector1.at(0) << " and " << vector1.at(1) << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    // The vector push_back() method adds a copy!!!
    
	return 0;
}
