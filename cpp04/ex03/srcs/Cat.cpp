#include "Cat.hpp"

Cat::Cat(void): Animal("Cat ") {
	std::cout << "Cat\tdefault constructor is called" << std::endl;
	this->_brain = new Brain();
	this->_type += (++n + 48);
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat\tcopy constructor is called" << std::endl;
	*this = other;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Cat\tassignment operator is called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain();
		this->_brain = other._brain;
	}
	return *this;
}

Cat::~Cat(void) {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat\tdestructor is called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Myau! Myau!" << std::endl;
}
