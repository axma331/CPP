#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
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
