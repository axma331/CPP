#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int	easyfind(T& container, int search) {
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), search);
		if (iter == container.end())
			throw "No matches found!";
	return std::distance(container.begin(), iter);
}

#endif