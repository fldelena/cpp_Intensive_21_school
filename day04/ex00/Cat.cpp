#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor is called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Copy Cat constructor is called" << std::endl;
	this->type = other.type;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
	return (*this);
}

const std::string Cat::getType() const
{
	return(this->type);
}

void Cat::makeSound() const
{
	std::cout << "Meow-meow " << std::endl;
}
