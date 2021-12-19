#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Default Ice constructor called." << std::endl;
}

Ice::Ice(const Ice &other)
{
    this->type = other.type;
    std::cout << "Copy Ice constructor called." << std::endl;
}

Ice::~Ice()
{
    std::cout << "Default Ice destructor called." << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    this->type = other.type;
    std::cout << "Assignation Ice operator called" << std::endl;
    return (*this);
}

AMateria* Ice::clone() const
{
    Ice* materia;
    materia = new Ice;
    return (materia);
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " * "<< std::endl;
}