#include "Conversion.hpp"
#include <iostream>

int main(int ac, char *av[]) {
	if (ac != 2)
		return 1;
	// (void)(av);
	// Conversion A;
	Conversion A(av[1]);
	A.print();
}