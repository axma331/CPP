#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T>
struct Array {
	Array();
	Array(unsigned int n);
	~Array();

	Array(const Array<T>&);
	Array&	operator=(const Array<T>&);
	T&	operator[](size_t idx);
	size_t	size() const;

private:
	unsigned int	_n;
	T*				_mass;
};

template<typename T>
Array<T>::Array(): _n(0), _mass(0) {}

template<typename T>
Array<T>::Array(unsigned int n):_n(n), _mass(new T[n]) {}

template<typename T>
Array<T>::~Array() {
	if (_mass)
		delete []_mass;
}

template<typename T>
Array<T>::Array(const Array<T>& other) { *this = other; }

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other) {
	if (this == &other)
		return *this;
	this->_n = other._n;
	this->_mass = new T[this->_n];
	for (int i(0); i < this->_n; ++i)
		this->_mass[i] = other._mass[i];
	return *this;
}

template<typename T>
T&	Array<T>::operator[](size_t idx) {
	if ( idx < 0 && idx > _n)
		throw "segmentation fault!";
	return this->_mass[idx];
}

template<typename T>
size_t	Array<T>::size() const { return this->_n; }


#endif
