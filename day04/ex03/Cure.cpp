#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout << "Default Cure constructor called." << std::endl;
}

Cure::Cure(const Cure &other)
{
    this->type = other.type;
    std::cout << "Copy Cure constructor called." << std::endl;
}

Cure::~Cure()
{
    std::cout << "Default Cure destructor called." << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
    this->type = other.type;
    std::cout << "Assignation Cure operator called" << std::endl;
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure* materia;
    materia = new Cure;
    return (materia);
}

void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals " << target.getName() << "’s wounds *"<< std::endl;
}