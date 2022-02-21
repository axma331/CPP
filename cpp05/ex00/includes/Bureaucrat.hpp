#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
public:
	Bureaucrat(const std::string& name, int grade);
	virtual ~Bureaucrat();

	Bureaucrat(const Bureaucrat&);
	Bureaucrat&	operator=(const Bureaucrat&);

	const std::string&	getName() const;
	int					getGrade() const;
	void				incrementGrade(void);
	void				decrementGrade(void);

	struct	GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	struct	GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};
private:
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
