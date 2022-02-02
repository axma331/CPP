#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

int	main() {

	ClapTrap A("Warrior");
	A.attack("Enemy");
	A.takeDamage(4);
	A.beRepaired(3);
	std::cout << std::endl;

	ScavTrap B("Soldier");
	B.attack("Separatist");
	B.takeDamage(30);
	B.beRepaired(20);
	B.takeDamage(30);
	B.guardGate();
	std::cout << std::endl;
	
	FlagTrap C("Hulk");
	C.attack("Captain A");
	C.takeDamage(50);
	C.beRepaired(30);
	C.takeDamage(40);
	C.highFivesGuys();
	std::cout << std::endl;

	return 0;
}
