// #include "contact.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>

class Contacts {
	std::string darkestsecret;
public:
	void ADD(void) {
	// using std::cout; using std::cin;
	std::cout << "Please, input a new contact`s information\nFirst name:";
	std::cin >> firstname;
	// cout << "Last name:";
	// cin >> lastname;
	// cout << "Nickname:";
	// cin >> nickname;
	// cout << "Darkest secret:";
	// cin >> darkestsecret;
	std::cout << "|";
	std::cout.width(10), std::cout.setf(std::ios::right);

	std::cout <<  std::setw(10) << firstname;
	std::cout << "|\n";
	}
protected:
	std::string firstname, lastname, nickname;
};

class PhoneBook:Contacts {
	char *list[8];
public:
	PhoneBook();
	~PhoneBook(void);

	void ADD(Contacts );

};


int main(int ac, const char *av[]) {
	using std::cout;
	Contacts Anna;
	Anna.ADD();




	
	return 0;
}