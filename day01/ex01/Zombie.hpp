#ifndef H_ZOMBIE
# define H_ZOMBIE
# include <iostream>
# include <string>

class Zombie
{
    std::string _name;
public:
    void SetName(std::string name);
    void announce( void );
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif