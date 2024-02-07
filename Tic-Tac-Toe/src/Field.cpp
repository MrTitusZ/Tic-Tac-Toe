#include <iostream>
#include "Field.h"

void DrawField(char field[3][3]) {
	std::cout << "-------------" << std::endl;
	for (int col = 0; col < sizeof(field[col]); col++) {
		std::cout << "|";
		for (int row = 0; row < sizeof(field[row]); row++) {
			std::cout << " " << field[col][row] << " " << "|";
		}
		std::cout << std::endl << "-------------" << std::endl;
	}
}

void InitializeGameField(char field[3][3]) {
	char emptyField = ' ';
	for (int col = 0; col < sizeof(field[col]); col++) {
		for (int row = 0; row < sizeof(field[row]); row++) {
			field[col][row] = emptyField;
		}
	}
	SetActiveField(field, 0, 0);
}

void SetActiveField(char field[3][3], int col, int row) {
	char FULL_BLOCK = 219;
	field[col][row] = FULL_BLOCK;
}