#include "Animal.hpp"

Animal::Animal(void) : _type("noType") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;	
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	std::cout << "Assignment operator called" << std::endl;
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

WrongAnimal::WrongAnimal(void) : _type("noType") {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;	
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

const std::string	WrongAnimal::getType(void) const {
	return this->_type;
}

