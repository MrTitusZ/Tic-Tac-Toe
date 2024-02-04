#include <iostream>;

void DrawField(int field) {
	//std::cout << "-------------" << std::endl;
	for (int i = 0; i < sizeof(field); i++) {
		std::cout << sizeof(field);
		/*for (int j = 0; j < sizeOfFiled; j++) {
			std::cout << " " << "*" << " " << "|";
		}*/
		std::cout << std::endl << "-------------" << std::endl;
	}
}