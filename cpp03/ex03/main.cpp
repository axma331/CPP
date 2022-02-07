#include "DiamondTrap.hpp"
#include <iostream>

int	main() {

	DiamondTrap A("Warrior");
	A.attack("Gorw");
	A.takeDamage(40);
	A.beRepaired(3);
	A.whoAmI();
	A.guardGate();
	A.highFivesGuys();

	return 0;
}
