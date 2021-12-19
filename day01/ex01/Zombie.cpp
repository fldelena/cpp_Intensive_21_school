#include "Zombie.hpp"

void    Zombie::SetName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->_name << " died" << std::endl;
}