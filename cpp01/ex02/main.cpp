#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	{
		std::cout << std::endl;
		Weapon w("СТАРОЕ");

		HumanA Ataking("David", w);
		Ataking.attack();
		w.setType("НОВОЕ");	
		Ataking.attack();
	}
	{
		std::cout << std::endl;
		Weapon w("СТАРОЕ");
		
		HumanB Defending("Galiaf");
		Defending.setWeapon(w);
		Defending.attack();
		w.setType("НОВОЕ");
		Defending.attack();
	}
	return 0;
}