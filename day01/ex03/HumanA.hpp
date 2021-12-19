#ifndef H_HUMANA
# define H_HUMANA
# include "Weapon.hpp"

class HumanA
{
    Weapon *_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon& other);
    void setName(std::string name);
    std::string getType();
    
    void    attack();
};

#endif 