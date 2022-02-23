#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	~Intern();
	
	Intern(const Intern&);
	Intern&	operator=(const Intern&);

	struct	UnknownFormException: std::exception {
		const char*	what() const throw();
	};

	Form*	makeForm(const std::string& formName, const std::string& targetName);
	// void	makeForm(const std::string& formName, const std::string& targetName);
};

#endif
