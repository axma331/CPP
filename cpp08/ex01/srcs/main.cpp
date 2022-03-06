#include "Span.hpp"

int main() {
		Span sp(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(115);
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}
	try {
		std::cout << "\n===================== shortestSpan =================\n";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "===================== longestSpan ==================\n";
		std::cout << sp.longestSpan() << std::endl;	
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}

	std::cout << "\n*********************** Range ****************************\n";
	Span spanRange = Span(100000);
	try {
		for (int i = 2; i < 100000; i++)
			spanRange.addNumber(i);
		spanRange.addNumber(2147483647);
		spanRange.addNumber(-2147483648);
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}
	try {
		spanRange.addNumber(9898);
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}
	try {
		std::cout << "\n===================== shortestSpan =================\n";
		std::cout << spanRange.shortestSpan() << std::endl;
		std::cout << "===================== longestSpan ==================\n";
		std::cout << spanRange.longestSpan() << std::endl;
	} catch (const char* error) {
		std::cerr << error << std::endl;
	}

	return 0;
}