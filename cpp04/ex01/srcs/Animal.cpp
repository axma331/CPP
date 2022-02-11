#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {
	std::cout << "Animal default constructor is called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type) {
	std::cout << "Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor is called" << std::endl;
	*this = other;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor is called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	std::cout << "Animal assignment operator is called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
}

const std::string	Animal::getType(void) const {
	return this->_type;
}
