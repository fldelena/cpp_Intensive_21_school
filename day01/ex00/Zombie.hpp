#ifndef H_ZOMBIE
# define H_ZOMBIE
# include <iostream>
# include <string>

class Zombie
{
    std::string _name;
public:
    Zombie (std::string zomb);
    ~Zombie( void );
    void announce(void);

};
    Zombie* newZombie(std::string name);
    void    randomChump(std::string name);

#endif

