#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
	this->Name = "No_name";
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string Name)
{
    std::cout << "ClapTrap constructor giving the name called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " NO Energy " << std::endl;
    }
    else
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << this->Name << " attack " << target
        << ", causing " << this->Attack_damage << " points of damage" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hitpoints -= amount;
    std::cout << "ClapTrap " << this->Name << " take " << amount 
    << " points of damege" << std::endl;
    if (this->Hitpoints <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " is dead." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->Name << " have " << this->Hitpoints << " Hitpoints" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int hp = this->Hitpoints;
    this->Hitpoints += amount;
    std::cout << "ClapTrap " << this->Name << " was Repaired ";
    if (hp <= 0)
    {
        std::cout <<"and was resurrected with " << amount << " Hitpoints." << std::endl;
    }
    else
    {
        std::cout <<"and now has "<< this->Hitpoints << " Hitpoints." << std::endl;
    }
}
