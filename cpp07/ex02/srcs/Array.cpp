#include "Array.hpp"
template<typename T>
Array<T>::Array(): _mass(new T) {}

template<typename T>
Array<T>::Array(unsigned int n): _mass(new T[n]) {}

template<typename T>
Array<T>::~Array() {
	for (int i(0); _mass[i]; ++i)
		delete _mass[i];
		// delete []_mass;
}