#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->clone[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->clone[i];
    }
    for (int i = 0; i < 4; i++)
    {
        this->clone[i] = other.clone[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource & other)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->clone[i];
    }
    for (int i = 0; i < 4; i++)
    {
        this->clone[i] = other.clone[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->clone[i];
    }
}

void    MateriaSource::learnMateria(AMateria* learn)
{
    if (!learn)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->clone[i] == NULL)
        {
            this->clone[i] = learn;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->clone[i]->getType() == type)
        {
            return (this->clone[i]->clone());
        }
    }
    return NULL;
}