//
// Created by Eliam on 05/05/2025.
//

#ifndef INTER_HPP
#define INTER_HPP

template<typename T>
void iter(T *array, int array_length, void (*f)(T &)) {
	for (int i = 0; i < array_length; i++) {
		f(array[i]);
	}
}

#endif //INTER_HPP
