#include <iostream>
#include <thread>
#include <chrono>

const int sizeOfFiled = 5;
const char fullBlock = char(219);

int main() {
	int frame = 0;
	while(true) {

	}
	std::cout << "Waiting..." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	return 0;
}