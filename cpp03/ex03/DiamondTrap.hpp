#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap(void);

	DiamondTrap	&operator= (const DiamondTrap &other);

	void	whoAmI();
	void	attack(const std::string &target);
private:
	std::string	_name;
};

#endif
