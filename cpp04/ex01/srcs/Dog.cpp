#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog default constructor is called" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = other;
}
Dog::~Dog(void) {
	std::cout << "Dog destructor is called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator is called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Gaw! Gaw!" << std::endl;
}