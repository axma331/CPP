#include "Conversion.hpp"

Conversion::Conversion(const char* str) {
	if (!str[1] && (32 < str[0] && str[0] < 127))
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
	if (_data < std::numeric_limits<char>::min() || std::numeric_limits<char>::max() < _data || std::isnan(_data))
		throw	"impossible";
	if (_data < 33 || _data > 126)
		throw	"Non displayable";
	return static_cast<char>(_data);
}

int	Conversion::toInt() {
	if (_data < std::numeric_limits<int>::min() || std::numeric_limits<int>::max() < _data || std::isnan(_data))
		throw	"impossible";
	return static_cast<int>(_data);
}

float	Conversion::toFloat() {
	if (_data < std::numeric_limits<float>::min() || std::numeric_limits<float>::max() < _data)
		throw "impossible";
	return static_cast<float>(_data) * 1.0;
}

double	Conversion::getDouble() {
	return _data;
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
		std::cout << "float:\t" << std::fixed << std::setprecision(1) << this->toFloat() << "f\n"; // Поставить конец форматирования строки
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
	try {
		std::cout << "double:\t" << std::fixed << std::setprecision(1) << this->getDouble() << "\n";
	} catch (const char* exception) {
		std::cout << exception << "\n";
	}
}


