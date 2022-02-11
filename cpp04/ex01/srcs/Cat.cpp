#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {
	std::cout << "Cat default constructor is called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = other;
}
Cat::~Cat(void) {
	std::cout << "Cat destructor is called" << std::endl;
	if (this->_brain)
		delete this->_brain;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator is called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain();
		this->_brain = other._brain;
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Myau! Myau!" << std::endl;
}
