#include "FlagTrap.hpp"

FlagTrap::FlagTrap(const std::string &name)	: ClapTrap(name) {
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Default FlagTrap constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other):ClapTrap() {
	std::cout << "Copy FlagTrap constructor called" << std::endl;
	*this = other;
}

FlagTrap::~FlagTrap(void) {
	std::cout << "FlagTrap destructor colled" << std::endl;
}

FlagTrap	&FlagTrap::operator= (const FlagTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void	FlagTrap::attack(const std::string &target) {
	std::cout << "FlagTrap " <<  this->_name << " attacks " << target << " causing "
		<< this->_attack_damage << " points of damage" << std::endl;
	if (this->_energy_points)
		--this->_energy_points;
}

void	FlagTrap::highFivesGuys(void) {
	std::cout << "Give me Five!" << std::endl;
}