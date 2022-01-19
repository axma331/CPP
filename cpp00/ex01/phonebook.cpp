#include "phonebook.hpp"

PhoneBook::PhoneBook(void) { 
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void    PhoneBook::using_book(void) {
	int			id = 0;
	bool		rewrite;
    std::string	command;

    while(true) {
		std::cout << "Please, enter one of the following command for using PhoneBook: ADD, SEARCH or EXIT!" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break;
        if (command == "ADD") {
            Note[id].add(id);			
			if (id + 1 == max_id) {
				std::cout << "WARNING: phonebook is full!" << std::endl;
				rewrite = true;
			}
			++id %= max_id;
			continue;
		}
		if (command == "SEARCH") {
			std::cout << "*" << std::setw(44) << std::setfill('-') << "*" << std::endl;
			std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
			std::cout << "*" << std::setw(44) << std::setfill('-') << "*" << std::setfill(' ') << std::endl;

			for (int i = 0; i < (rewrite ? max_id : id); i++) {
				Note[i].show_in_the_list();
			}
		


			
			continue;
		}
    }
}