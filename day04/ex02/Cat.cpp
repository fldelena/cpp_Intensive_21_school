#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat constructor is called" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Copy Cat constructor is called" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.GetBrain());
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor is called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.GetBrain());
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


Brain* Cat::GetBrain() const
{
	return (this->brain);
}