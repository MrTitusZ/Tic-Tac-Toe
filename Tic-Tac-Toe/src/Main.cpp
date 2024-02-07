#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <algorithm>
#include "Field.h"

int Clamp(int val, int min, int max);
void ClearScreen();
void HandleUserInput();

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

int main() {
	char field[3][3];
	const char fullBlock = char(219);
	bool isPlaying = true;

	InitializeField(field);
	field[0][0] = fullBlock;
	DrawField(field);

	int ch, i = 0, j = 0;
	while (isPlaying)
	{
		ch = _getch();
		if (ch == ArrowIndicator) // If the character is and arrow indicator it means that the next character will be an arrow
			ch = _getch();
		switch (ch)
		{
		case UpArrow:
			field[i][j] = ' ';
			i--;
			i = Clamp(i, 0, 2);
			j = Clamp(j, 0, 2);
			ClearScreen();
			field[i][j] = fullBlock;
			DrawField(field);
			break;
		case DownArrow:
			field[i][j] = ' ';
			i++;
			i = Clamp(i, 0, 2);
			j = Clamp(j, 0, 2);
			ClearScreen();
			field[i][j] = fullBlock;
			DrawField(field);
			break;
		case RightArrow:
			field[i][j] = ' ';
			j++;
			i = Clamp(i, 0, 2);
			j = Clamp(j, 0, 2);
			ClearScreen();
			field[i][j] = fullBlock;
			DrawField(field);
			break;
		case LeftArrow:
			field[i][j] = ' ';
			j--;
			i = Clamp(i, 0, 2);
			j = Clamp(j, 0, 2);
			ClearScreen();
			field[i][j] = fullBlock;
			DrawField(field);
			break;
		case Enter:
			ClearScreen();
			field[i][j] = 'x';
			DrawField(field);
			break;
		case Esc:
			isPlaying = false;
			break;
		default:
			std::cout << "default!" << std::endl;
			break;
		}
	}
	
	return 0;
}

void HandleUserInput() {

}

void ClearScreen() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

int Clamp(int val, int min, int max) {
	if (val <= min)
		return min;
	else if (val >= max)
		return max;
	else
		return val;
}