#include "Easyfind.hpp"

#define SIZE	10

int main()
{
	std::vector<int> vct;
	for (int i(0); i < SIZE; ++i)
		vct.push_back(i + 10);
	for (int i(0); i < SIZE; ++i)
		std::cout << vct[i] << std::endl;
	std::cout << easyfind(vct, 10) << std::endl;
	try {
		std::cout << easyfind(vct, 100);
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}
	return 0;
}
