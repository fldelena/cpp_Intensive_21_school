#include "AMateria.hpp"

AMateria::AMateria(std::string const type)
{
    this->type = type;
}

AMateria::~AMateria()
{

}

AMateria::AMateria()
{

}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " * "<< std::endl;
}