#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "Field.h"

void ClearScreen();

enum Key
{
	UpArrow = 72,
	DownArrow = 80,
	RightArrow = 77,
	LeftArrow = 75,
	Esc = 27
};

int main() {
	char field[3][3];
	const char fullBlock = char(219);
	bool isPlaying = true;

	InitializeField(field);

	// Testing a field change
	field[0][1] = fullBlock;

	int c;
	while (isPlaying)
	{
		
		DrawField(field);

		c = _getch();
		if (c == 224)
			c = _getch();
		switch (c)
		{
		case UpArrow:
			std::cout << "UpArrow pressed!" << std::endl;
			break;
		case DownArrow:
			std::cout << "DownArrow pressed!" << std::endl;
			break;
		case RightArrow:
			std::cout << "RightArrow pressed!" << std::endl;
			break;
		case LeftArrow:
			std::cout << "LeftArrow pressed!" << std::endl;
			break;
		case Esc:
			isPlaying = false;
			break;
		default:
			std::cout << "default!" << std::endl;
			break;
		}

		ClearScreen();
	}
	
	return 0;
}

void ClearScreen() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}