#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << name << "\tdestruction forever!" << std::endl;
	return;
}

void Zombie::announce(void) const {
	std::cout << name << "\tBraiiiiiiinnnzzzZ..." << std::endl;
}