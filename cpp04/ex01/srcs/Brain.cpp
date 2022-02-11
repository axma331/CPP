#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor is called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = other;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor is called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain assignment operator is called" << std::endl;
	if (this != &other)
		for(int i(0); i < NUM; ++i)
			this->ideas[i] =  other.ideas[i];
	return *this;
}