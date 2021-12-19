#ifndef H_FRAGTRAP
#define H_FRAGTRAP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string);
    FragTrap(const FragTrap &other);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &other);
    void attack(std::string const &target);
    void highFivesGuys();
};

#endif