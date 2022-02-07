#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)	: ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap() {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor colled" << std::endl;
}

FragTrap	&FragTrap::operator= (const FragTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void	FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " <<  this->_name << " attacks " << target << " causing "
		<< this->_attack_damage << " points of damage" << std::endl;
	if (this->_energy_points)
		--this->_energy_points;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Give me Five!" << std::endl;
}