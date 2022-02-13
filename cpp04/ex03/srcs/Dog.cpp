#include "Dog.hpp"

Dog::Dog(void): Animal("Dog ") {
	std::cout << "Dog\tdefault constructor is called" << std::endl;
	this->_brain = new Brain();
	this->_type += (++n + 48);
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog\tcopy constructor is called" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Dog\tassignment operator is called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain();
		this->_brain = other._brain;
	}
	return *this;
}

Dog::~Dog(void) {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat\tdestructor is called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Gaw! Gaw!" << std::endl;
}