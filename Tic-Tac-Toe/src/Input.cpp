#include <iostream>
#include <conio.h>
#include "Input.h"
#include "Field.h"

enum Key
{
	UpArrow = 72,
	DownArrow = 80,
	RightArrow = 77,
	LeftArrow = 75,
	Enter = 13,
	Esc = 27,
	ArrowIndicator = 224
};

void HandleUserInput(char field[3][3], int& col, int& row, bool& isPlaying) {
	int ch = _getch();
	if (ch == ArrowIndicator) // If the character is and arrow indicator it means that the next character will be an arrow
		ch = _getch();
	switch (ch)
	{
	case UpArrow:
		field[col][row] = ' ';
		col--;
		col = Clamp(col, 0, 2);
		SetActiveField(field, col, row);
		break;
	case DownArrow:
		field[col][row] = ' ';
		col++;
		col = Clamp(col, 0, 2);
		SetActiveField(field, col, row);
		break;
	case RightArrow:
		field[col][row] = ' ';
		row++;
		row = Clamp(row, 0, 2);
		SetActiveField(field, col, row);
		break;
	case LeftArrow:
		field[col][row] = ' ';
		row--;
		row = Clamp(row, 0, 2);
		SetActiveField(field, col, row);
		break;
	case Enter:
		field[col][row] = 'x';
		break;
	case Esc:
		isPlaying = false;
		break;
	default:
		std::cout << "Use an arrow!" << std::endl;
		break;
	}
}

int Clamp(int val, int min, int max) {
	if (val < min)
		return min;
	else if (val > max)
		return max;
	else
		return val;
}