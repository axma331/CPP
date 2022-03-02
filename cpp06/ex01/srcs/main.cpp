#include "Data.hpp"
#include <cstdint>

int main() {
	Data *ptr_1 = new Data;
	ptr_1->_c	= 'c';
	ptr_1->_i	= 1;
	ptr_1->_f	= 2.2;
	ptr_1->_d	= 3.3;
	ptr_1->_ld	= 4.4;
	ptr_1->_str	= "string";

	std::cout << "Step 1:\t" << ptr_1 << std::endl;
	uintptr_t raw = serialize(ptr_1);
	std::cout << "Step 2:\t" << raw << std::endl;
	Data *ptr_2 = deserialize(raw);
	std::cout << "Step 3:\t" << ptr_2 << std::endl;
	std::cout << ptr_2->_c << std::endl;
	std::cout << ptr_2->_i<< std::endl;
	std::cout << ptr_2->_f<< std::endl;
	std::cout << ptr_2->_d << std::endl;
	std::cout << ptr_2->_ld<< std::endl;
	std::cout << ptr_2->_str << std::endl;
	return 0;
}

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}