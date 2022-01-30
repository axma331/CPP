#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) 
		: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap	&other) {
	std::cout << "Assignment operator colled" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor colled" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " <<  this->_name << " attacks " << target << " causing "
		<< this->_attack_damage << " points of damage" << std::endl;
	if (this->_energy_points)
		--this->_energy_points;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " take " << amount << " damage" << std::endl;
	if (_hit_points)
		this->_hit_points-=amount;
	if (this->_hit_points <= 0) {
		this->_hit_points = 0;
		std::cout << this->_name << " is destroyed!" << std::endl;
		return;
	}
	std::cout << this->_name << " has " << this->_hit_points << " hit point left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points && 0 < this->_hit_points && this->_hit_points < 10) {
		--this->_energy_points;
		this->_hit_points += amount;
		std::cout << this->_name << " has been repaierd by " << amount << " points" << std::endl;
	}
	else if (this->_hit_points >= 10)
		std::cout << "Hit points is full"<< std::endl;
	else if (!this->_energy_points)
		std::cout << "You don`t have energy points!"<< std::endl;
	else if (!this->_hit_points)
		std::cout << this->_name <<  " is beyond repair" << std::endl;
}