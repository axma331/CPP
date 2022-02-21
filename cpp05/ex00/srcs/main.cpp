#include "Bureaucrat.hpp"

int main() {
	try {
		std::cout << "------|Grade = 0|------" << std::endl;
		Bureaucrat B("Misha", 0);
		std::cout << B << std::endl;
	} catch (std::exception& exception) {
		std::cout<< exception.what() << std::endl;
	}

	try {
		std::cout << "------|Grade = 151|------" << std::endl;
		Bureaucrat B("Misha", 151);
		std::cout << B << std::endl;
	} catch (std::exception& exception) {
		std::cout<< exception.what() << std::endl;
	}

	try {
		std::cout << "------|Grade = 2|------" << std::endl;
		Bureaucrat B("Misha", 2);
		std::cout << B << std::endl;
		B.incrementGrade();
		std::cout << B << std::endl;
		B.incrementGrade();
		std::cout << B << std::endl;
	} catch (std::exception& exception) {
		std::cout<< exception.what() << std::endl;
	}

	try {
		std::cout << "------|Grade = 149|------" << std::endl;
		Bureaucrat B("Misha", 149);
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
	} catch (std::exception& exception) {
		std::cout<< exception.what() << std::endl;
	}

	try {
		std::cout << "------|Grade = 10|------" << std::endl;
		Bureaucrat B("Misha", 10);
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
		B.incrementGrade();
		std::cout << B << std::endl;
		B.incrementGrade();
		std::cout << B << std::endl;
	} catch (std::exception& exception) {
		std::cout<< exception.what() << std::endl;
	}
	std::cout << "The end!" << std::endl;
	return 0;
}