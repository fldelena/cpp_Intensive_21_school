#ifndef H_SCAVTRAP
#define H_SCAVTRAP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string Name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);
    void attack(std::string const &target);
    void guardGate(); 
};

#endif