//
// Created by Eliam on 05/05/2025.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& param1, T& param2) {

	T tmp;

	tmp = param1;
	param1 = param2;
	param2 = tmp;
}

template<typename T>
T min(T param1, T param2) {
	if (param1 == param2) {
		return (param2);
	}
	if (param1 > param2) {
		return (param2);
	} else {
		return (param1);
	}
}

template<typename T>
T max(T param1, T param2){
	if (param1 == param2) {
		return (param2);
	}
	if (param1 > param2) {
		return (param1);
	} else {
		return (param2);
	}
}


#endif //WHATEVER_HPP
