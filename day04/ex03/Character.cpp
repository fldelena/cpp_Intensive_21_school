#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        skils[i] = NULL;
    }
}

Character::Character(std::string const Name)
{
    this->Name = Name;
    for (int i = 0; i < 4; i++)
    {
        skils[i] = NULL;
    }
}

Character::Character(const Character & other)
{
    this->Name = other.Name;
    for (int i = 0; i < 4; i++)
    {
        delete this->skils[i];
    }
    for (int i = 0; i < 4; i++)
    {
        this->skils[i] = other.skils[i]->clone();
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->skils[i];
    }
}

Character &Character::operator=(const Character & other)
{
    this->Name = other.Name;
    for (int i = 0; i < 4; i++)
    {
        delete this->skils[i];
    }
    for (int i = 0; i < 4; i++)
    {
        this->skils[i] = other.skils[i]->clone();
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return(this->Name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->skils[i] == NULL)
        {
            this->skils[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (this->skils[idx] != NULL)
        this->skils[idx] = NULL;
    for (int i = 0; i < 4; i++)
    {
        if(this->skils[i] == NULL && this->skils[i + 1] != NULL)
            this->skils[i] = this->skils[i + 1];
    }
}


void Character::use(int idx, ICharacter& target)
{
    if (this->skils[idx] == NULL || idx < 0 || idx > 3)
        return;
    else
        this->skils[idx]->use(target);
}