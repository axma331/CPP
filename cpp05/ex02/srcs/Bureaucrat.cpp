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
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void	Bureaucrat::decrementGrade(void) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Bureaucrat error: rade too high!";
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return  "Bureaucrat error: grade too low!";
}

void	Bureaucrat::signForm(Form& form) const{
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (std::exception & exception) {
		std::cout << this->_name << " couldn`t sign " << form.getName() << " because " << exception.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) {
	try {
		form.execute(*this);
		std::cout << this->getName()<< " executed " << form.getName() << std::endl;
	} catch (std::exception& exception) {
		std::cout << exception.what() << std::endl;
	}
}


std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
