#include "Zombie.hpp"

int main(void) {
    Zombie A("First");
    A.announce();
    Zombie *B = newZombie("Second");
    B->announce();
    randomChump("Third");
    delete B;
    return 0;
}