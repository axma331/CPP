#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	{
		Weapon w("crude spiked club");
		HumanA David("David", w);
		David.attack();
		w.setType("some other type of club");
		David.attack();
	}
	{
		Weapon w("crude spiked club");

		HumanB Galiaf("Galiaf");
		Galiaf.setWeapon(w);
		Galiaf.attack();
		w.setType("some other type of club");
		Galiaf.attack();
	}
	return 0;
}