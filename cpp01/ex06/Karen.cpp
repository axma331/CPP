#include "Karen.hpp"

Karen::Karen(void) {
	return;
}
Karen::~Karen(void) {
	return;
}

void	Karen::debug(void) {
	std::cout << "DEBUG:\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it." << std::endl;
};

void	Karen::info(void) {
	std::cout << "INFO:\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
};

void	Karen::warning(void) {
	std::cout << "WARNING:\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
};

void	Karen::error(void) {
	std::cout << "ERROR:\nThis is unacceptable, I want to speak to the manager now." << std::endl;
};

void	Karen::karenFilter(const std::string level) {
	void	(*function[4])() = {Karen::debug,
								Karen::info,
								Karen::warning,
								Karen::error};
	std::string	s[4] = {"DEBUG",
						"INFO",
						"WARNING",
						"ERROR"};
	int i(-1);
	while(++i < 4)
		if (!s[i].compare(level))
			break;
	switch (i) {
		case 0: function[0]();
		case 1: function[1]();
		case 2: function[2]();
		case 3: function[3]();
			break;
		default:	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return;
}