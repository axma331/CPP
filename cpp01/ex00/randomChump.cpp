#include "Zombie.hpp"
#include <string>

void randomChump(std::string name) {
    if (name.length() % 2) {
        Zombie C(name);
        C.announce();
    }
    else {
        Zombie *D = newZombie(name);
        D->announce();
        delete D;
    }
}