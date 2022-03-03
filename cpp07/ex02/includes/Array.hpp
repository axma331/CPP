#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
struct Array {
	Array();
	Array(unsigned int n);
	~Array();
private:
	T	*_mass;
};

#endif