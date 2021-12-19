#ifndef H_DIAMONDTRAP
#define H_DIAMONDTRAP
#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(const std::string Name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &other);
    void whoAMI();
    
};

#endif
