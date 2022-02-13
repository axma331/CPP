#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain\tdefault constructor is called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain\tcopy constructor is called" << std::endl;
	*this = other;
}

Brain::~Brain(void) {
	std::cout << "Brain\tdestructor is called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain\tassignment operator is called" << std::endl;
	if (this != &other)
		for(int i(0); i < NUM; ++i)
			this->ideas[i] =  other.ideas[i];
	return *this;
}