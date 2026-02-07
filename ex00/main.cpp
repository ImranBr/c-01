#include "Zombie.hpp"

int main()
{
    Zombie* allocatedZombie = newZombie("Zom");
    allocatedZombie->announce();
    delete allocatedZombie;
    randomChump("Bie");
}

