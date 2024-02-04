#include "Field.h"

const char fullBlock = char(219);

int main() {
	char field[3][3];

	InitializeField(field);

	// Testing a field change
	field[0][1] = fullBlock;

	DrawField(field);
	return 0;
}

