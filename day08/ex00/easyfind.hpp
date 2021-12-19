#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

template <class T>
typename T::const_iterator easyfind(const T& cont, int val)
{
    typename T::const_iterator ret = std::find(cont.begin(), cont.end(), val);

    if (*ret != val)
    {
        throw std::exception();
    }
    return ret;
}


#endif