#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "|||||||||||||||||||" <<std::endl;
    FragTrap robkiy("Evlampiy");
    std::cout << "|||||||||||||||||||" <<std::endl;
    robkiy.attack("Aristarkh");
    robkiy.takeDamage(60);
    robkiy.beRepaired(13);
    robkiy.highFivesGuys();
    std::cout << "|||||||||||||||||||" <<std::endl;
    return (0);
}