#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form(other) {
	*this = other;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != & other)
		this->_target = other._target;
	return *this;
}

void	PresidentialPardonForm::pardon(void) const {

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

