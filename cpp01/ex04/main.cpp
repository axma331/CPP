#include "Replace.hpp"

int main(int ac, const char *av[]) {
	if (ac != 4)
		return 1;
	Replace F(av[2], av[3]);
	F.set_iofilename(av[1], ".replace");
	if (!F.replace()) {
		std::cout << "Replacement failed"<< std::endl;
		return 1;
	}
	return 0;
}
