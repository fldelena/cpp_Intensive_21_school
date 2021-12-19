#include "Zombie.hpp"

int main()
{
    int number;
    std::string s_number;
    std::string name;
    std::cout << "number of zombies: ";
    std::cin >> s_number;
    for (int i = 0; i < (int)s_number.length(); i++)
        if(s_number[i] < 48 || s_number[i] > 57)
        {
            std::cout << "error"<<std::endl;
            return (0);
        }
    number = std::stoi(s_number);
    std::cout << "name of zombies: ";
    std::cin >> name;

    Zombie *zombies;
    zombies = zombieHorde(number, name);
    for (int i = 0; i < number; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}