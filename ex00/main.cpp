#include "Zombie.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;
    randomChump("Bar");
}