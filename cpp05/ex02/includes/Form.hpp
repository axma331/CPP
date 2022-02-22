#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
public:
	Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
	virtual ~Form();

	Form(const Form&);
	Form&	operator=(const Form&);

	struct GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	struct GradeTooLowException	: public std::exception {
		const char* what() const throw();
	};
	struct  DoesntSignedFormException : public std::exception {
		const char* what() const throw();
	};

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	void				beSigned(const Bureaucrat&);
	
	// virtual void	execute(const Bureaucrat&) const = 0;
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	bool				_isSigned;
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
