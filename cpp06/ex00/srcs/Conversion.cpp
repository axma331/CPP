#include "Conversion.hpp"

Conversion::Conversion(const char* str) {
	if (!str[1] && str[0] < '0' && str[0] > '9')
		_data = static_cast<double>(str[0]);
	else
		_data = atof(str);
}

Conversion::~Conversion() {}

Conversion::Conversion(const Conversion& other) {
	*this = other;
}

Conversion&	Conversion::operator=(const Conversion&) {
	return *this;
}

double	Conversion::getDouble() {
	return _data;
}

int	Conversion::toInt() {
	return static_cast<int>(_data);
}

float	Conversion::toFloat() {
	if (_data > std::numeric_limits<float>::max())
		throw "error"; // Допистаь корректную ошибку
	return static_cast<float>(_data);
}



