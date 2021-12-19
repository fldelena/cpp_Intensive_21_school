#include "Zombie.hpp"

int main ()
{
    Zombie* zombo;
    zombo = newZombie("Gerald");
    randomChump("Hugo");
    delete (zombo);
    return (0);
}