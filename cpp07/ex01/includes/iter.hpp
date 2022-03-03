#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T* mass, size_t len, void (*funcName)(const T&)) {
	for (size_t i(0); i < len; ++i)
		funcName(mass[i]);
}

#endif