#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);

	struct DoesntOpenFile : public std::exception {
		const char*	what() const throw();
	};	

	void			drawAscii() const;
	virtual void	execute(const Bureaucrat& execotor) const;
private:
	std::string	_target;
};

#endif
