#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <string>

template<typename T>
class MutantStack : public std::stack <T>
{
public:
    MutantStack<T>();
    MutantStack<T>(const MutantStack &other);
    ~MutantStack<T>();
    MutantStack &operator=(const MutantStack &other);

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    
    iterator begin(void);
    iterator end(void);

    reverse_iterator rbegin(void);
    reverse_iterator rend(void);
};


#endif