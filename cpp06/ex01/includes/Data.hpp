#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

typedef struct	s_Data {
	char		_c;
	int			_i;
	float		_f;
	double		_d;
	long double	_ld;
	std::string _str;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif