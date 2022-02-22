#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
};

#endif
