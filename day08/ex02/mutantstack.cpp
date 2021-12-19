#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{
    this->c = other.c;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    this->c = other.c;
    return(*this);
}


template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin(void)
{
    return(this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end(void)
{
    return(this->c.end());    
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
    return(this->c.rbegin());
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend(void)
{
    return(this->c.rend());    
}
