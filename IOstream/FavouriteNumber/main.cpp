#include <iostream>

int main(){
    int fav_number;
	std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> fav_number;
    std::cout << "Amazing!!! That's my favourite number too!" << std::endl;
    std::cout << "No, really!!, " << fav_number 
              <<" is my favourite number!" << std::endl;
	return 0;
}
