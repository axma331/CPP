#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

#define DELIM std::cout << "=====================================" << std::endl;

int main() {
	DELIM
	RobotomyRequestForm A("Afinya");
	A.drillingNoises();
	return 0;
}