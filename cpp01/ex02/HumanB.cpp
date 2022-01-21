#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
	return;
}

HumanB::HumanB(std::string name, Weapon weapon) : _name(name), _weapon(weapon) {
    return;
}

HumanB::~HumanB(void) {
    return;
}

void    HumanB::attack(void) const {
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

