#include "Form.hpp"

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) {
		if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
			throw Form::GradeTooHighException();
		if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
			throw Form::GradeTooLowException();
	}
Form::~Form(void) {}

Form::Form(const Form& other): _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
	*this = other;
}

Form&	Form::operator=(const Form& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return *this;
}

const char*	Form::GradeTooHighException::what(void) const throw() {
	return	"Form error: grade too high!";
}

const char*	Form::GradeTooLowException::what(void) const throw() {
	return	"Form error: grade too low!";
}

const std::string&	Form::getName(void) const {
	return this->_name;
}

bool	Form::getIsSigned(void) const {
	return this->_isSigned;
}

int	Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int	Form::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}


void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (this->_gradeToSign < bureaucrat.getGrade())
			throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream&	operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << " has a next param:\nGrade to sign:\t\t" << form.getGradeToSign() \
		<< "\nGrade to execute:\t"<< form.getGradeToExecute() \
		<< "\nIs signed:\t\t" << form.getIsSigned() << std::endl;
	return out;
}
