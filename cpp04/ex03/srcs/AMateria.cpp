#include "AMateria.hpp"

AMateria::AMateria(void): _type("noType") {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	std::cout << "AMateria constryctor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructot called" << std::endl;
}

AMateria::AMateria(const AMateria & other) {
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria & other) {
	std::cout << "AMateria assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

const std::string&	AMateria::getType(void) const {
	return this->_type;
}

void AMateria::use(ICharacter&) {
	std::cout << "* Use AMateria *" << std::endl;
}