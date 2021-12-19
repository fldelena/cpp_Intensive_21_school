#ifndef H_CHARACTER
#define H_CHARACTER
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter
{
private:
    std::string Name;
    AMateria* skils[4];
public:
    Character();
    Character(std::string const Name);
    Character(const Character & other);
    virtual~Character();
    Character &operator=(const Character & other);
    
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif