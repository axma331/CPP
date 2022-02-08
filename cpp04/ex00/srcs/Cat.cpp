#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type) {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}
Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Myau! Myau!" << std::endl;
}

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}
WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Myau! Myau!" << std::endl;
}

