#ifndef H_ICE
# define H_ICE
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &other);
    virtual ~Ice();
    Ice& operator=(const Ice &other);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};



#endif