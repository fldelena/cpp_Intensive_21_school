#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "|||||||||||||||||||" <<std::endl;
    DiamondTrap rezkiy("Modest");
    std::cout << "|||||||||||||||||||" <<std::endl;
    rezkiy.guardGate();
    rezkiy.ScavTrap::attack("Vizako");
    rezkiy.takeDamage(666);
    rezkiy.beRepaired(33);
    rezkiy.whoAMI();
    std::cout << "|||||||||||||||||||" <<std::endl;
    return (0);
}
