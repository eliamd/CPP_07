//
// Created by Eliam on 07/05/2025.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>


template<typename T>
class Array {
private:
	T *_array;
	int array_size;

public:
	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ CONSTRUCTOR ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	Array() {
		_array = new T[0];
		array_size = 0;
		std::cout << "\n +++++++++ Array default constructor called  +++++++++" << std::endl;
	}

	Array(unsigned int n) {
		_array = new T[n];
		array_size = n;
		std::cout << "\n +++++++++ Array constructor with n = " << n << " called  +++++++++" << std::endl;
	}

	Array(const Array &other) {
		_array = other._array;
		array_size = other.array_size;
		std::cout << "\n +++++++++ Copy constructor called  +++++++++" << std::endl;
	}

	Array<T> &operator=(const Array &copy) {
		if (this != &copy) {
			delete[] this->_array;
			this->_array = new T(*copy._array);
			array_size = copy.array_size;
		}
		std::cout << "\n ======== operator= called  ========" << std::endl;
		return (*this);
	}

	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ DESTRUCTOR ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	~Array() {
		//  delete[] _array;
		std::cout << "\n -------- Array default destructor called  --------" << std::endl;
	}

	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ METHODS ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ GETTERS ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	int size() const {
		return (array_size);
	}

	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ SETTERS ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	// ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ OPERATOR OVERLOAD ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	T &operator[](int index) const {
		if (index < 0 || index >= this->array_size) {
			throw std::out_of_range("Out of range ");
		}
		return _array[index];
	}
};


#endif //ARRAY_HPP
