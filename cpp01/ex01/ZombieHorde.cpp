#include "Zombie.hpp"
#include <iomanip>

Zombie* zombieHorde( int N, std::string name) {
    std::string		number;    
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        number = (i + 48);
        horde[i].setName(name + " № " + number);
    }
    return horde;
}