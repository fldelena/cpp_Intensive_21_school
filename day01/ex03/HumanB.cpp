# include "Weapon.hpp"
# include "HumanB.hpp"

void HumanB::setName(std::string name)
{
    this->_name = name;
}

HumanB::HumanB(std::string name)
{
    HumanB::setName(name);
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

std::string HumanB::getType()
{
    return(_weapon->getType());
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << getType() << std::endl; 
}