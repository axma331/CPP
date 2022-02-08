#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}
Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Gaw! Gaw!" << std::endl;
}