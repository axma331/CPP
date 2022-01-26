#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed	&operator = (const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const rew);
private:
	int					_fixed_point_number;
	static const int	_number_of_fractional_bits;
};

#endif
