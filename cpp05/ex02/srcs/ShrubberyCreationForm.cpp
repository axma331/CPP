#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): Form(other) {
	*this = other;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
		this->_target = other._target;
	return *this;
}

void	ShrubberyCreationForm::drawAscii(void) const {
	std::ofstream	outfile((this->_target + "_shrubbery").c_str());
	if (!outfile.is_open())
		ShrubberyCreationForm::DoesntOpenFile();
	outfile << "		ccee88oo D0o\n";
	outfile << "  C8O8O8Q8PoOb o8oo\n";
	outfile << " dOB69QO8PdUOpugoO9bD\n";
	outfile << "CgggbU8OU qOp qOdoUOdcb\n";
	outfile << "    6OuU  /p u gcoUodpP\n";
	outfile << "      ||//  /douUP\n";
	outfile << "        \\||///\n";
	outfile << "         |||/|\n";
	outfile << "         |||||\n";
	outfile << "         |||||\n";
	outfile << "   .....//|||||...." << std::endl;
	outfile.close();
}

const char*	ShrubberyCreationForm::DoesntOpenFile::what(void) const throw(){
		return	"Doesn`t open the file";
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	try {
		Form::execute(executor);
		this->drawAscii();
	} catch (std::exception& executor) {
		std::cout << executor.what() << std::endl;
	}
}