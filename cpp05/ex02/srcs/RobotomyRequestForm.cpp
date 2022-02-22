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
	srand(static_cast<unsigned int>(time(0)));
	if (rand() % 2)
		std::cout << "Robotomy failed" << std::endl;
	else
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
}
