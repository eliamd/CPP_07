#include <iostream>
#include "../includes/Array.hpp"

#define MAX_VAL 750

int main(int, char **) {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;
	} catch (const std::exception &e) {
		std::cerr << e.what() << "numbers[-2] = 0;" << '\n';
	}
	try {
		numbers[MAX_VAL - 1] = 0;
	} catch (const std::exception &e) {
		std::cerr << e.what() << "numbers[MAX_VAL] = 0;" << '\n';
	}

	for (int i = 0; i < 5; i++) {
		if (numbers[i] % 2 == 0) {
			std::cout << "Even value: " << numbers[i] << std::endl;
		} else {
			std::cout << "Odd value: " << numbers[i] << std::endl;
		}
		numbers[i] = rand();
	}
	delete [] mirror; //
	return 0;
}
