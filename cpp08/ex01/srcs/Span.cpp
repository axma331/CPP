#include "Span.hpp"

Span::Span(): _maxSize(0) {}

Span::Span(const unsigned int size): _maxSize(size) {}

Span::Span(const Span& other): _maxSize(0), _array(other._array) {}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		_maxSize = other._maxSize;
		_array = other._array;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int nbr) {
	if (_array.size() >= _maxSize)
		throw "overflow";
	_array.push_back(nbr);
}

size_t	Span::shortestSpan() const {
	if (_array.size() < 2)
		throw "Shortest span impossible!";
	std::vector<int> tmp(_array);
	std::sort(tmp.begin(), tmp.end());
	size_t mininum = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); ++ i) {
		mininum = std::min(mininum, static_cast<size_t>(tmp[i]) - tmp[i - 1]);
	}
	return mininum;
}

size_t	Span::longestSpan() const {
	if (_array.size() < 2)
		throw "Longest span impossible!";
	long min = *std::min_element(_array.begin(), _array.end());
	long max = *std::max_element(_array.begin(), _array.end());
	return max - min;
}