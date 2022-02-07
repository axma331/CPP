#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
public:
	FragTrap(const std::string &name = "");
	FragTrap(const FragTrap &other);
	~FragTrap(void);
	
	FragTrap	&operator=(const FragTrap &other);

	void	attack(const std::string &target);
	void	highFivesGuys(void);
};

#endif