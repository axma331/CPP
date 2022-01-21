#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon weapon);
    ~HumanB(void);
    
    void        attack(void) const;
private:
    std::string _name;
    Weapon      _weapon;
};
#endif
