#ifndef H_AMATERIA
# define H_AMATERIA
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const type); // 
    AMateria(const AMateria & other);
    virtual ~AMateria();
    AMateria& operator=(const AMateria & other);

    std::string const & getType() const; //Returns the materia type //
    virtual AMateria* clone() const = 0; //
    virtual void use(ICharacter& target); //
};


#endif