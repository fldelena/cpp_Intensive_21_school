#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor is called" << std::endl;
}

Brain::Brain(const Brain & other)
{
    std::cout << "Copy Brain constructor is called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{   
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}
