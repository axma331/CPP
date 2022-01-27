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
	int					_rawBits;
	static const int	_shift;
};

#endif
