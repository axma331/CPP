#include "Intern.hpp"

#define LINE	std::cout << "-------------------" << std::endl;

int main() {
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Car");

		Bureaucrat v1("Boria", 20);

	LINE
		v1.signForm(*rrf);
	LINE
		v1.executeForm(*rrf);
	LINE
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