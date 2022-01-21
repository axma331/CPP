#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon W("crude spiked club");

	HumanA Ataking("David", W);
	HumanB Defending("Galiaf", W);
	Ataking.attack();
	Defending.attack();

	return 0;
}