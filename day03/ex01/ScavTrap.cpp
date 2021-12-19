#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->Name = "Noname";
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string Name)
{
    std::cout << "ScavTrap constructor giving the name called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (this->Energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->Name << " NO Energy " << std::endl;
    }
    else
    {
        this->Energy_points--;
        std::cout << "ScavTrap " << this->Name << " attack " << target
        << ", causing " << this->Attack_damage << " points of damage" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name <<
    " have enterred in Gate keeper mode." << std::endl;
}