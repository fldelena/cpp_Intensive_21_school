#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

class Span
{
    unsigned int        N;
    int                 count;
    std::vector<int>    vec;
public:
    Span(unsigned int N);
    Span(const Span &other);
    ~Span();
    Span &operator=(const Span &other);

    std::vector<int> getVec();
    void    addNumber(int num);
    void    moreAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan(void) const;
    int longestSpan(void)const;

    class FullVectorException : public std::exception
    {
    public:
        const char *what () const throw();
    };
    class ShortVectorException : public std::exception
    {
    public:
        const char *what () const throw();
    };
};



#endif