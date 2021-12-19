#ifndef H_MATERIASOURCE
# define H_MATERIASOURCE
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
private:
    AMateria *clone[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource & other);
    MateriaSource &operator=(const MateriaSource & other);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif