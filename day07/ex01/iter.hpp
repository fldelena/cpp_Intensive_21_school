#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void    iter(T (*array), int lenght, void (*func)(T &))
{
    for(int i = 0; i < lenght; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void halve(T& a)
{
    a /= 2;
}

template <typename T>
void caesar(T& a)
{
    a += 3;
}

template <typename T>
void print(T& a)
{
    std::cout << a << std::endl;
}

#endif