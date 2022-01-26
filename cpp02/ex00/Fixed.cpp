#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point_number(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &other) {
	std::cout << "Copy assignment operator calle" << std::endl;
	this->_fixed_point_number = other.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_number;
}

void	Fixed::setRawBits(int const rew) {
	this->_fixed_point_number = rew;
}