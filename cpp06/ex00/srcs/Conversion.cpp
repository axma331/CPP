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

Conversion&	Conversion::operator=(const Conversion& other) {
	if (this != &other)
		this->_data = other._data;
	return *this;
}

char	Conversion::toChar() {
	if (_data > 255)
		throw	"impossible";
	if (_data < 33 && _data > 127)
		throw	"Non displayable";
	return static_cast<char>(_data);
}

double	Conversion::getDouble() {
	return _data;
}

int	Conversion::toInt() {
	if (_data > std::numeric_limits<int>::max())
		throw	"impossible";
	return static_cast<int>(_data);
}

float	Conversion::toFloat() {
	if (_data > std::numeric_limits<float>::max())
		throw "error"; // Допистаь корректную ошибку
	return static_cast<float>(_data) * 1.0;
}

void	Conversion::print(){
	try {
		std::cout << "char:\t" << this->toChar() << "\n";
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
	try {
		std::cout << "int:\t" << this->toInt() << "\n";
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
	try {
		std::cout << "float:\t" << this->toFloat() << "f\n";
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
	try {
		std::cout << "double:\t" << this->getDouble() << "\n";
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
}


