#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_i = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param)
{
    std::cout << "Int constructor called" << std::endl;
    this->_i = param * (1 << this->f_bit);
}

Fixed::Fixed(const float param)
{
    std::cout << "Float constructor called" << std::endl;
    this->_i = roundf(param * (1 << this->f_bit));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_i = other.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (this->_i);
}

void Fixed::setRawBits( int const raw )
{
    this->_i = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)(this->_i / (float)(1 << this->f_bit)));
}

int Fixed::toInt( void ) const
{
    return((this->_i / (1 << this->f_bit)));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->_i = other.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &ret, const Fixed &other)
{
    return (ret << other.toFloat());
}

