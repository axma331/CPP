#include "Fixed.hpp"
#include <iostream>
#include <string>

/*	Default constructor, overload constructor, copy constructor and destructor	*/

Fixed::Fixed(void) : _rawBits(0) {
	// std::cout << "Default constructor called" << std::endl;
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

/*	Assignment operators overload: = , +, -, *, /, ++, --, (post)++, (post)--	*/

Fixed&	Fixed::operator= (const Fixed &other) {
	std::cout << "Copy assignment operator calle" << std::endl;
	if (this != &other)
		this->_rawBits = other._rawBits;
	return *this;
}

Fixed&	Fixed::operator+ (const Fixed &other) {
		this->_rawBits += other._rawBits;
	return *this;
}

Fixed&	Fixed::operator- (const Fixed &other) {
		this->_rawBits -= other._rawBits;
	return *this;
}

Fixed&	Fixed::operator* (const Fixed &other) {
		this->_rawBits *= other.toFloat();
	return *this;
}

Fixed&	Fixed::operator/ (const Fixed &other) {
	if (!other._rawBits)
		return *this;
	this->_rawBits /= other.toFloat();
	return *this;
}

Fixed&	Fixed::operator++ (void) {
		++this->_rawBits;
	return *this;
}

Fixed&	Fixed::operator-- (void) {
		--this->_rawBits;
	return *this;
}

Fixed	Fixed::operator++ (int) {
	Fixed tmp(*this);
		++(*this);
	return tmp;
}

Fixed	Fixed::operator-- (int) {
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

/*	Member finction	*/

int	Fixed::toInt(void) const {
	return this->_rawBits >> this->_shift;
}

float	Fixed::toFloat(void) const {
	return (float)this->_rawBits / (1 << this->_shift);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

/*	Insertion operator overload	*/

std::ostream&	operator<< (std::ostream &out, const Fixed &other) {
	out << other.toFloat();
	return out;
}

/*	Comparison operators overload	*/

bool	operator== (const Fixed &left, const Fixed &right) {
	return left.getRawBits() == right.getRawBits();
}

bool	operator!= (const Fixed &left, const Fixed &right) {
	return !(left == right);
}

bool	operator> (const Fixed &left, const Fixed &right) {
	return left.getRawBits() > right.getRawBits();
}

bool	operator< (const Fixed &left, const Fixed &right) {
	return right > left;
}

bool	operator<= (const Fixed &left, const Fixed &right) {
	return !(left > right);
}

bool	operator>= (const Fixed &left, const Fixed &right) {
	return !(right > left);
}

/*	overloads of static member functions	*/

Fixed&			Fixed::min(Fixed &first, Fixed &second) {
	return first < second ? first : second;
}

const Fixed&	Fixed::min(const Fixed &first, const Fixed &second) {
	return first < second ? first : second;
}

Fixed&			Fixed::max(Fixed &first, Fixed &second) {
	return first > second ? first : second;
}

const Fixed&	Fixed::max(const Fixed &first, const Fixed &second) {
	return first > second ? first : second;
}