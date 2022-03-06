#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

struct Span {
	Span(const unsigned int size);
	~Span();
	Span(const Span&);
	Span&	operator=(const Span&);

	void	addNumber(int nbr);
	size_t		shortestSpan() const;
	size_t		longestSpan() const;
private:
	Span();
	unsigned int		_maxSize;
	std::vector<int>	_array;
};


#endif