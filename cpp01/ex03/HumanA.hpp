#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, const Weapon &weapon);
	~HumanA(void);
	
	void	attack(void) const;
private:
	std::string		_name;
	const Weapon	&_weapon;
};

#endif
