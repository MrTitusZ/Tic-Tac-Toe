#include <iostream>

const int sizeOfFiled = 5;
const char fullBlock = char(219);

int main () {
	int frame = 0;
	std::cout << "-------------" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "|";
		for (int j = 0; j < 3; j++) {
			std::cout << " " << "*" << " " << "|";
		}
		std::cout<< std::endl << "-------------" << std::endl;
	}
	return 0;
}