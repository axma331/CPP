#include "contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

void	Contact::add(int id) {
	this->id = ++id;
	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phonenumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestsecret);
	std::cout << "Contact № " << this->id << " creation!" << std::endl;
}

void	Contact::show(void) {
	std::cout << "First name:\t" << firstname << "\n";
	std::cout << "Last name:\t" << lastname << "\n";
	std::cout << "Nickname:\t" << nickname << "\n";
	std::cout << "Phone number:\t" << phonenumber << "\n";
	std::cout << "Darkest secret:\t" << darkestsecret << std::endl;
}

void	Contact::show_in_the_list(void) {
	std::cout << "|" << std::setw(9) << id << ".";
	std::cout << "|" << std::setw(10) << firstname.substr(0, 9) + ".";
	std::cout << "|" << std::setw(10) << lastname.substr(0, 9) + ".";
	std::cout << "|" << std::setw(11) << nickname.substr(0, 9) + ".|" << std::endl;
}
