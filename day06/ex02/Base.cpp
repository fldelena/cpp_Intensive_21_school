#include "Base.hpp"

int rando()
{
    srand(time(0));
    return (rand()%3);
}

Base *generate(void)
{
    switch (rando())
    {
    case 0:
        return (createA());
        break;
    case 1:
        return (createB());
        break;
    case 2:
        return (createC());
        break;
    default:
        break;
    }
    return NULL;
}

A *createA()
{
    return new A;
}

B *createB()
{
    return new B;
}

C *createC()
{
    return new C;
}


void identify(Base* p)
{
    std::cout << "Мы взаимодействуем с указателем класса - ";
    if(dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "* звуки нетипичного поведения *" << std::endl;
}

void identify(Base& p)
{
    Base base;
    std::cout << "Мы взаимодействуем с ссылкой класса - ";
    try 
    {
        base = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast &){}
    try 
    {
        base = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast &){}
    try 
    {
        base = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast &){}
}