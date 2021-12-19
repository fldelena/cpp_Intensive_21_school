#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "|||||||||||||||||||" <<std::endl;
    ScavTrap zzz("Pavel");
    std::cout << "|||||||||||||||||||" <<std::endl;
    zzz.attack("Emanuil");
    zzz.takeDamage(110);
    zzz.beRepaired(5);
    zzz.guardGate();
    std::cout << "|||||||||||||||||||" <<std::endl;
    return (0);
}