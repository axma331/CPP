#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern&) {}

Intern&	Intern::operator=(const Intern&) {
	return *this;
}

Form*	Intern::makeForm(const std::string& formName, const std::string& targetName) {
	static std::string	forms[3] = {"shrubbery creation",
							"robotomy request",
							"president Pardon"};
	int i(0);
	while (i < 3 && forms[i].compare(formName) && ++i)
		if (i == 3)
			throw	Intern::UnknownFormException();
	std::cout << "Intern creates " << formName << std::endl;
	switch (i) {
		case 0:
			return new ShrubberyCreationForm(targetName);
		case 1:
			return new RobotomyRequestForm(targetName);
		case 2:
			return new PresidentialPardonForm(targetName);
	}
	return 0;
}

const char*	Intern::UnknownFormException::what(void) const throw() {
	return	"The form is unknown!";
}
