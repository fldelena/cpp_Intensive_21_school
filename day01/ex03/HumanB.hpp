#ifndef H_HUMANB
# define H_HUMANB
# include "Weapon.hpp"

class HumanB
{
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string type);
    void setName(std::string name);
    void setWeapon(Weapon& weapon);
    std::string getType();
    void    attack();
};

#endif 