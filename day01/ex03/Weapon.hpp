#ifndef H_WEAPON
# define H_WEAPON
# include <iostream>
# include <string>

class Weapon
{
    std::string _type;
public:
    Weapon(std::string weapon);
    Weapon(void);
    const std::string &getType( void );
    void     setType(std::string type);
};

#endif