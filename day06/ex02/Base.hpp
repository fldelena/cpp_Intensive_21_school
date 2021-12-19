#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <string>

class Base
{
public:
    virtual ~Base() {};
};

class A: public Base
{};
class B: public Base
{};
class C: public Base
{};

Base * generate(void);
A *createA();
B *createB();
C *createC();

void identify(Base* p);
void identify(Base& p);

int rando();

#endif