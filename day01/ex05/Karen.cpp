#include "Karen.hpp"

void Karen::debug( void )
{
    std::cout << "DEBUG" << std::endl;
    std::cout << "I love to get extra bacon for my" << std::endl << 
                 "7XL-double-cheese-triple-pickle-special-ketchup" << std::endl <<
                 "burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "INFO" << std::endl;
    std::cout <<"I cannot believe adding extra bacon" << std::endl <<
                "cost more money. You don’t put enough!" << std::endl <<
                "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "WARNING" << std::endl;
    std::cout <<"I think I deserve to have some extra" << std::endl <<
                "bacon for free. I’ve been coming here" << std::endl <<
                "for years and you just started working" << std::endl <<
                "here last month." << std::endl;
}

void Karen::error( void )
{
    std::cout << "ERROR" << std::endl;
    std::cout << "This is unacceptable, I want to speak" << std::endl <<
                 "to the manager now." << std::endl;
}

void Karen::bad( void )
{
    std::cout << "bad argument" <<std::endl;
}

void Karen::complain( std::string level )
{

    std::string level_arr[4] = {"DEBUG",     
                                "INFO",
                                "WARNING",
                                "ERROR"};
    int i = 0;         
    while (i < 4 && level != level_arr[i])
        i++;
    typedef void (Karen::*ptr)();
    ptr mtd;
    switch (i)
    {
    case (0):
        mtd = &Karen::debug;
        break;
    case (1):
        mtd = &Karen::info;
        break;
    case (2):
        mtd = &Karen::warning;
        break;
    case (3):
        mtd = &Karen::error;
        break;
    default:
        mtd = &Karen::bad;
        break;
    }
    (this->*mtd)();
}