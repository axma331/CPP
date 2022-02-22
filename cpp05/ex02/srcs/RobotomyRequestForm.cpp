#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): Form(other) {
	*this = other;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != & other)
		this->_target = other._target;
	return *this;
}

void	RobotomyRequestForm::drillingNoises(void) const {
	std::cout << "Brrrr... Drrrr.." << std::endl;
	srand(time(0));
	if (rand() % 2)
		RobotomyRequestForm::RobotomyFailedException();
	else
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
}

const char*	RobotomyRequestForm::RobotomyFailedException::what(void) const throw() {
	throw	"Robotomy failed";
}
