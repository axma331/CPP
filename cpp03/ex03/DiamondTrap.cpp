#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), _name(name) {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap &other) {
	std::cout << "Assignment operator colled" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor colled" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is "<< this->_name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}