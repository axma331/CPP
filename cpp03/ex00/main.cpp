#include "ClapTrap.hpp"
#include <iostream>

int	main() {

	ClapTrap A("Shoma");
	A.attack("his target");
	A.takeDamage(2);
	A.takeDamage(2);
	A.takeDamage(2);
	A.takeDamage(2);
	A.takeDamage(2);
	A.beRepaired(2);
	A.beRepaired(2);

	return 0;
}
