#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define LINE	std::cout << "-------------------" << std::endl;

int main() {
	srand(time(NULL));

	Bureaucrat	bad("Bad", 149);
	std::cout << bad << std::endl;
	Bureaucrat	good("Good", 5);
	std::cout << good << std::endl;

	std::cout << "\n=============ShrubberyCreationForm============" << std::endl;
	ShrubberyCreationForm formA("FormA");
	std::cout << formA << std::endl;
	LINE
	good.executeForm(formA);
	LINE
	good.signForm(formA);
	LINE
	good.executeForm(formA);
	LINE
	bad.executeForm(formA);

	std::cout << "\n==============RobotomyRequestForm=============" << std::endl;
	RobotomyRequestForm formB("FormB");
	std::cout << formB << std::endl;
	good.executeForm(formB);
	good.signForm(formB);
	good.executeForm(formB);
	bad.executeForm(formB);

	std::cout << "\n=============PresidentialPardonForm===========" << std::endl;
	PresidentialPardonForm formC("FormC");
	std::cout << formC << std::endl;
	good.executeForm(formC);
	good.signForm(formC);
	good.executeForm(formC);
	bad.executeForm(formC);

	return 0;
}