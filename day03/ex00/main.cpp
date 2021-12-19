#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Victor");
    std::cout << "|||||||||||||||||||" <<std::endl;
    robot.attack("Antoha");
    robot.takeDamage(7);
    robot.beRepaired(5);
    std::cout << "|||||||||||||||||||" <<std::endl;
    robot.takeDamage(9);
    robot.beRepaired(5);
    std::cout << "|||||||||||||||||||" <<std::endl;
    return (0);
}