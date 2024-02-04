#include <iostream>
#include "DrawField.h"

const int sizeOfFiled = 3;
const char fullBlock = char(219);

int main() {
	int field[sizeOfFiled][sizeOfFiled]{};
	for (int i = 0; i < sizeOfFiled; i++) {
		for (int j = 0; j < sizeOfFiled; j++) {
			field[i][j] = 1;
		}
	}

	std::cout << "------------" << std::endl;
	for (int i = 0; i < sizeOfFiled; i++) {
		for (int j = 0; j < sizeOfFiled; j++) {
			std::cout << " " << field[i][j] << " " << "|";
		}
		std::cout << std::endl << "------------" << std::endl;
	}
	return 0;
}

