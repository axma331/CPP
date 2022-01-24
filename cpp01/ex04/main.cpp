#include "Replace.hpp"
#include <iomanip>
#include <fstream>

int main(int ac, const char *av[]) {
	if (ac != 4)
		return 1;
	Replace F(av[2], av[3]);
	F.set_iofilename(av[1], ".replace");
	F.getValue();
	if (!F.check_length())
		return 1;
	if (F.replace())
		return 1;
	return 0;
}
