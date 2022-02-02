#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap {
public:
	FlagTrap(const std::string &name);
	FlagTrap(const FlagTrap &other);
	~FlagTrap(void);
	
	FlagTrap	&operator=(const FlagTrap &other);

	void	attack(const std::string &target);
	void	highFivesGuys(void);
};

#endif