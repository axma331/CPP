#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<class T>
struct Array {
	Array();
	Array(unsigned int n);
	Array(const Array<T>&);
	~Array();

	Array&		operator=(const Array<T>&);
	T&			operator[](const size_t idx);
	const T&	operator[](const size_t idx) const;

	struct OutOfRangeException: std::exception {
		const char*	what() const throw();
	};

	size_t	size() const;
private:
	unsigned int	_n;
	T*				_mass;
};

template<typename T>
Array<T>::Array(): _n(0), _mass(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _n(n), _mass(new T[n]) {}

template<typename T>
Array<T>::~Array() {
	if (_mass)
		delete []_mass;
}

template<typename T>
Array<T>::Array(const Array<T>& other): _n(0), _mass(0) { *this = other; }

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other) {
	if (this == &other)
		return *this;
	if (this->_mass)
		delete [] this->_mass;
	this->_n = other._n;
	this->_mass = 0;
	this->_mass = new T[this->_n];
	for (size_t i(0); i < this->_n; ++i)
		this->_mass[i] = other._mass[i];
	return *this;
}

template<typename T>
T&			Array<T>::operator[](const size_t idx) {
	return idx < _n ? this->_mass[idx] : throw OutOfRangeException(); }

template<typename T>
const T&	Array<T>::operator[](const size_t idx) const {
	return idx < _n ? this->_mass[idx] : throw OutOfRangeException(); }

template<typename T>
const char*	Array<T>::OutOfRangeException::what() const throw() {
	return "Exception: index is out of range!";
}

template<typename T>
size_t	Array<T>::size() const { return this->_n; }

#endif
