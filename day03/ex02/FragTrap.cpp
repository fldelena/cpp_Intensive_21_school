#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string Name)
{
    std::cout << "FragTrap constructor giving the name called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

	return (*this);
}

void FragTrap::attack(std::string const &target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "FragTrap " << this->Name << " NO Energy " << std::endl;
    }
    else
    {
        this->Energy_points--;
        std::cout << "FragTrap " << this->Name << " attack " << target
        << ", causing " << this->Attack_damage << " points of damage" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->Name << " high-Five!!!!! " << std::endl;
}