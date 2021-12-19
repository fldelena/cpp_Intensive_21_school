#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructor is called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Copy Dog constructor is called" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.GetBrain());
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor is called" << std::endl;
	delete brain;
}
 
Dog &Dog::operator=(const Dog& other)
{
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.GetBrain());
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

Brain* Dog::GetBrain() const
{
	return (this->brain);
}