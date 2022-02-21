#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"
class Form;

class Bureaucrat {
public:
	Bureaucrat(const std::string& name, int grade);
	virtual ~Bureaucrat();

	Bureaucrat(const Bureaucrat&);
	Bureaucrat&	operator=(const Bureaucrat&);

	struct	GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};
	struct	GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

	const std::string&	getName() const;
	int					getGrade() const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	void				signForm(Form&);
private:
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
