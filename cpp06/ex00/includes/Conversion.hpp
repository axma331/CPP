#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>

class Conversion {
public:
	Conversion(const char* str = "0");
	virtual ~Conversion();

	Conversion(const Conversion&);
	Conversion&	operator=(const Conversion&);

	void	print();
	char	toChar();
	int		toInt();
	float	toFloat();
	double	toDouble();
private:
	double	_data;
};

#endif
