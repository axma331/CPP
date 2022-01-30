#ifndef CLAPTRAAP_HPP
# define CLAPTRAAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
public:
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap(void);

	ClapTrap	&operator= (const ClapTrap &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
};

#endif