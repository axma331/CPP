#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string &name)	: ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor colled" << std::endl;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " <<  this->_name << " attacks " << target << " causing "
		<< this->_attack_damage << " points of damage" << std::endl;
	if (this->_energy_points)
		--this->_energy_points;
}


void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
};
