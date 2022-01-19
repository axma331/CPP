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
		if (!command.compare("EXIT"))
			break;
        else if (!command.compare("ADD")) {
            Note[id].add(id);			
			if (id + 1 == max_id) {
				std::cout << "WARNING: phonebook is full!" << std::endl;
				rewrite = true;
			}
			++id %= max_id;
			continue;
		}
		else if (!command.compare("SEARCH")) {
			std::cout << "*" << std::setw(44) << std::setfill('-') << "*" << std::endl;
			std::cout << "|     index|First name| Last name|  Nickname|" << std::endl;
			std::cout << "*" << std::setw(44) << std::setfill('-') << "*" << std::setfill(' ') << std::endl;

			for (int i = 0; i < (rewrite ? max_id : id); i++)
				Note[i].show_in_the_list();
			while(rewrite || id) {
				std::cout << "Please, enter the index of the contact to view: " << std::endl;
				std::getline(std::cin, command);
				int i = std::atoi(command.c_str());
				if (0 < i && i <= (rewrite ? max_id : id)) {
					Note[i - 1].show();
					break;
				}
				else
				std::cout << "Incorrect the index of the contact!" << std::endl;
			}
			continue;
		}
		else
			std::cout << "Incorrect command!" << std::endl;
    }
}