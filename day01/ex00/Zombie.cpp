#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << " New zombie " << this->_name <<  std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->_name << " died" << std::endl;
}

