#include "Zombie.hpp"

Zombie::Zombie(void) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << _name << "\tdestruction forever!" << std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << _name << "\tBraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &name) {
	_name = name;
}
