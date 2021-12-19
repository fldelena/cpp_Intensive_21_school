#include "span.hpp"

Span::Span(unsigned int N)
{
    this->N = N;
    this->count = 0;
    this->vec.reserve(N);

}

Span::Span(const Span &other)
{
    this->N = other.N;
    this->count = other.count;
    this->vec = std::vector<int> (other.vec);
}

Span::~Span()
{
    this->vec.clear();
}

Span &Span::operator=(const Span &other)
{
    this->N = other.N;
    this->count = other.count;
    this->vec = std::vector<int> (other.vec);
    return(*this);
}

void Span::addNumber(int num)
{
    if (this->count >= this->N)
        throw FullVectorException();
    this->count++;
    this->vec.push_back(num);
}

void Span::moreAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    int range = std::distance(begin, end);
    if (this->count + range >= this->N)
        throw FullVectorException();
    this->count +=range;
    this->vec.insert(vec.begin() + vec.size(), begin, end);
}

int Span::shortestSpan(void) const
{
    int ret = 2147483647;
    std::vector<int> tmp(this->vec);
    std::vector<int> shortvec;

    if (this->vec.size() < 2)
        throw ShortVectorException();
    std::sort(std::begin(tmp), std::end(tmp));
    for(int i = 1; i < (tmp.size()); i++)
        shortvec.push_back(tmp.at(i) - tmp.at(i - 1));
    for(int i = 0; i < shortvec.size(); i++)
    {
        if (ret > shortvec.at(i))
            ret = shortvec.at(i);
    }
    return (ret);
}

int Span::longestSpan(void) const
{
    if (this->vec.size() < 2)
        throw ShortVectorException();
    std::vector<int> tmp(this->vec);
    std::sort(std::begin(tmp), std::end(tmp));
    return (*(tmp.end() - 1) - *tmp.begin());
}

const char *Span::FullVectorException::what() const throw()
{
    return("vector is full ");
}

const char *Span::ShortVectorException::what() const throw()
{
    return("vector is short ");
}