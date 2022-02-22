#include "Bureaucrat.hpp"
#include "Form.hpp"

#define DELIM "====================================="
#define COUTDELIM std::cout << DELIM << std::endl;

int main() {
Bureaucrat	bureaucrat2("Bureaucrat_2", 149);
	Bureaucrat	bureaucrat3("Bureaucrat_3", 42);

	Form formA("Form_A", 40, 50);
	Form formB("Form_B", 40, 50);

	COUTDELIM

	try {
		Bureaucrat	bureaucrat1("Bureaucrat_1", -1);
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	COUTDELIM
	std::cout << '\n' << bureaucrat3 << '\n' << formA << std::endl;
	bureaucrat3.signForm(formA);
	std::cout << '\n' << bureaucrat2 << '\n' << formA << std::endl;
	bureaucrat2.signForm(formA);
}