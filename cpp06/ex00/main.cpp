#include <cstdlib>
#include <iostream>

int main()
{
	std::cout << std::atof("0.0000000123") << '\n'
			<< std::atof("0.012")        << '\n'
			<< std::atof("15e16")        << '\n'
			<< std::atof("-0x1afp-2")    << '\n'
			<< std::atof("in1F1")          << '\n'
			<< std::atof("Nan1")          << '\n'
			<< std::atof("invalid")      << '\n';a
}