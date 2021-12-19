# include "Weapon.hpp"
# include "HumanA.hpp"

void HumanA::setName(std::string name)
{
    this->_name = name;
}

std::string HumanA::getType( void )
{
    return (_weapon->getType());
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->_weapon = &weapon;
    HumanA::setName(name); 
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << getType() << std::endl; 
}