#ifdef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {

public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	ScavTrap	&operator= (const ScavTrap &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate(void);

private:
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
};

#endif
