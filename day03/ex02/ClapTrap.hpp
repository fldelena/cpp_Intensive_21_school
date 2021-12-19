#ifndef H_CLAPTRAP
#define H_CLAPTRAP
#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string Name;
    int Hitpoints;
    int Energy_points;
    int Attack_damage;
public:
    ClapTrap();
    ClapTrap(const std::string Name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &other);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif



// С этого момента каждый ваш урок ДОЛЖЕН быть в ортодоксальной канонической форме: По крайней мере
// один конструктор по умолчанию, конструктор копирования, перегрузка оператора присваивания и
// деструктор. Мы больше не будем спрашивать.