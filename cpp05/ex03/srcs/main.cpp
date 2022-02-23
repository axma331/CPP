#include "Intern.hpp"

#define LINE	std::cout << "-------------------" << std::endl;

int main() {
	LINE
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Car");

		Bureaucrat v1("Boria", 20);
		v1.signForm(*rrf);
		v1.executeForm(*rrf);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	LINE
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotsomy request", "Bender");
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}