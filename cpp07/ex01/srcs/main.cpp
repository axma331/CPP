#include "iter.hpp"
#include "string"
#include "ostream"

template<typename T>
void	_print(const T& obj) {
	std::cout << obj << std::endl;
}

struct Test {
	Test(): _str("Test string") {}
	std::string	getStr(void) const { return _str; }
private:
	std::string	_str;
};

std::ostream&	operator<<(std::ostream& out, const Test& obj) {
	out << obj.getStr();
	return out;
}

int main() {
	int imass[5] = {5, 4, 3, 2, 1};
	double dmass[5] = {5.5, 4.4, 3.3, 2.2, 1.1};
	Test Tc[5];
	iter(imass, 5, _print);
	iter(dmass, 5, _print);
	iter(Tc, 5, _print);
	return 0;
}
