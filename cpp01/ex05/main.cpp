#include "Karen.hpp"
#include <iostream>

int main(int ac, char *av[]) {
	if (ac != 2)
		return 1;
	Karen().complain(av[1]);
	return 0;
}