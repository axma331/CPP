#include "Fixed.hpp"
#include <iostream>
#include <string>



Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << this->_shift;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << this->_shift));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed &other) {
	std::cout << "Copy assignment operator calle" << std::endl;
	if (this != &other)
		this->_rawBits = other._rawBits;
	return *this;
}

int		Fixed::toInt(void) const {
	return this->_rawBits >> this->_shift;
}

float	Fixed::toFloat(void) const {
	return (float)this->_rawBits / (1 << this->_shift);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

std::ostream&	operator<< (std::ostream &out, const Fixed &other) {
	out << other.toFloat();
	return out;
}