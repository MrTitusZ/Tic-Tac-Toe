#include <iostream>;

void DrawField(char field[3][3]) {
	std::cout << "-------------" << std::endl;
	for (int i = 0; i < sizeof(field[i]); i++) {
		std::cout << "|";
		for (int j = 0; j < sizeof(field[j]); j++) {
			std::cout << " " << field[i][j] << " " << "|";
		}
		std::cout << std::endl << "-------------" << std::endl;
	}
}

void InitializeField(char field[3][3]) {
	for (int i = 0; i < sizeof(field[i]); i++) {
		for (int j = 0; j < sizeof(field[j]); j++) {
			field[i][j] = ' ';
		}
	}
}