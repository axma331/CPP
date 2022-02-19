#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice(void) {}

Ice::Ice(const Ice& other) {
	*this = other;
}

Ice&	Ice::operator=(const Ice& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria*	Ice::clone() const {
	return new Ice();
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}