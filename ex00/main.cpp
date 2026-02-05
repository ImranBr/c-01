#include "Zombie.hpp"

int main(int ac, char **av)
{
    (void)ac; (void)av;
    Zombie* allocatedZombie = newZombie("Zom");
    allocatedZombie->announce();
    delete allocatedZombie;
    randomChump("Bie");
}

