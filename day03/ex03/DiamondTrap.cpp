#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->Name = "no_Name";
    ClapTrap::Name = "no_Name_clap_name";
    Hitpoints = FragTrap::Hitpoints;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout << "DiamondTrap constructor giving the name called" << std::endl;
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    Hitpoints = FragTrap::Hitpoints;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->Name = other.Name;
    this->Hitpoints = other.Hitpoints;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;

	return (*this);
}


void DiamondTrap::whoAMI()
{
    std::cout << "Zdarova! I am DiamondTrap " << this->Name << 
                " and my ClapTrap Name is " << ClapTrap::Name << std::endl;
}
