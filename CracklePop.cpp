#include <iostream>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				std::cout << "CracklePop" << std::endl;
			}
			else {
				std::cout << "Crackle" << std::endl;
			}
		}
		else if (i % 5 == 0) {
			std::cout << "Pop" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
}
