#include "AMateria.hpp"

AMateria::AMateria(void): _type("") {}

AMateria::AMateria(const std::string& type): _type(type) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

const std::string&	AMateria::getType(void) const {
	return this->_type;
}

void	AMateria::use(ICharacter&) {
	std::cout << "* No AMateria to use *" << std::endl;
}