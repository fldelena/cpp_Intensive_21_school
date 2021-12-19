#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "Copy WrongCat constructor is called" << std::endl;
	this->type = other.type;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor is called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->type = other.type;
	return (*this);
}

const std::string WrongCat::getType() const
{
	return(this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow-meow " << std::endl;
}
