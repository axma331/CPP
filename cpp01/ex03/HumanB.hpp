#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB(void);
    
    void        attack(void) const;
    void        setWeapon(const Weapon &weapon);
private:
    std::string		_name;
    const Weapon	*_weapon;
};
#endif
