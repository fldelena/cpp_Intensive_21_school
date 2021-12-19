#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor is called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Copy Dog constructor is called" << std::endl;
	this->type = other.type;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor is called" << std::endl;
}
 
Dog &Dog::operator=(const Dog& other)
{
	this->type = other.type;
	return (*this);
}

const std::string Dog::getType() const 
{
	return(this->type);
}

void Dog::makeSound() const
{
	std::cout << "Gav-gav-gav " << std::endl;
}
