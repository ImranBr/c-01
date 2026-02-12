#include "Zombie.hpp"

int main()
{
    int N = 2;
    Zombie* horde = zombieHorde(N, "Zombie Horde");

    if (!horde)
        return 1;
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}