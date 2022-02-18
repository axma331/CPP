#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& other) {
	*this = other;
}

Cure&	Cure::operator=(const Cure& other) {
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria*	Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}