#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade) {
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
	*this = other;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

const std::string&	Bureaucrat::getName(void) const {
	return this->_name;
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade(void) {
	if (--this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();

}

void	Bureaucrat::decrementGrade(void) {
	if (++this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Grade too high!";
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
