#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed&			operator= (const Fixed &other);
	Fixed&			operator+ (const Fixed &other);
	Fixed&			operator- (const Fixed &other);
	Fixed&			operator* (const Fixed &other);
	Fixed&			operator/ (const Fixed &other);
	Fixed&			operator++ (void);
	Fixed&			operator-- (void);
	Fixed			operator++ (int);
	Fixed			operator-- (int);

	static			Fixed&	min(Fixed &first, Fixed &second);
	static const	Fixed&	min(const Fixed &first, const Fixed &second);
	static			Fixed&	max(Fixed &first, Fixed &second);
	static const	Fixed&	max(const Fixed &first, const Fixed &second);

	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					_rawBits;
	static const int	_shift = 8;
};

std::ostream&	operator<< (std::ostream &out, const Fixed &other);
bool			operator== (const Fixed &left, const Fixed &right);
bool			operator!= (const Fixed &left, const Fixed &right);
bool			operator<= (const Fixed &left, const Fixed &right);
bool			operator>= (const Fixed &left, const Fixed &right);
bool			operator< (const Fixed &left, const Fixed &right);
bool			operator> (const Fixed &left, const Fixed &right);


#endif
