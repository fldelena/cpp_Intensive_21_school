#include "Animal.hpp"

Animal::Animal()
{
	this->type = "the raandom beast";
	std::cout << "Default Animal constructor is called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy Animal constructor is called" << std::endl;
	this->type = other.type;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor is called" << std::endl;
}


Animal& Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return (*this);
} 

const std::string Animal::getType() const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << this->getType() <<" chews" << std::endl;
}
