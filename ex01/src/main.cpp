#include <iostream>
#include <string.h>

#include "../includes/iter.hpp"

template<typename T>
void print(T& x) {
	std::cout << x << " ";
}

template<typename T>
void increment(T& x) {
	x++;
}

int main() {
	int tab[] = {1, 2, 3, 4, 5};

	iter(tab, 5, print<int>);
	std::cout << std::endl;

	iter(tab, 5, increment<int>);

	iter(tab, 5, print<int>);
	std::cout << std::endl;

	return 0;
}
