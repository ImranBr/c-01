#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    _name = name;
}

void Zombie::announce() const
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}