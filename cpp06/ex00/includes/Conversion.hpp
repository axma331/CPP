#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <ostream>
#include <cstdlib>
#include <limits>

class Conversion {
public:
	Conversion(const char* str = "0");
	virtual ~Conversion();

	Conversion(const Conversion&);
	Conversion&	operator=(const Conversion&);

	char	toChar();
	int		toInt();
	float	toFloat();
	double	getDouble();
	void	print();
private:
	double	_data;
};

#endif
