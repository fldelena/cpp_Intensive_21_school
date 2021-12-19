#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "the beast";
	std::cout << "Default WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Copy WrongAnimal constructor is called" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor is called" << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	return (*this);
} 

const std::string WrongAnimal::getType() const
{
	return(this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->getType() <<" chews" << std::endl;
}
