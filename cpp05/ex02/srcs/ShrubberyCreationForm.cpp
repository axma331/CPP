#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name, const int gradeToSign, const int gradeToExecute)
	: Form(name, gradeToSign, gradeToExecute) {
		std::cout << this->getGradeToSign();
		std::cout << this->getGradeToExecute();
	}