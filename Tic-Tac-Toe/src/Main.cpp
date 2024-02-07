#include <cstdlib>
#include "Field.h"
#include "Input.h"

void ClearScreen();

int main() {
	char field[3][3];
	bool isPlaying = true;

	InitializeGameField(field);
	DrawField(field);

	int col = 0, row = 0;
	while (isPlaying)
	{
		HandleUserInput(field, col, row, isPlaying);
		ClearScreen();
		DrawField(field);
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