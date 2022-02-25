#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
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
private:
double	_data;
	
};
#endif
