#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <class T>
class Array
{
private:
    T   *data;
    int lenght;
public:
    Array()
    {
        this->data = new T[0];
        this->lenght = 0;
    }

    Array(unsigned int n)
    {
        this->data = new T[n]();
        this->lenght = n;
    }

    Array(const Array &other)
    {
        this->lenght = other.size();
        this->data = new T[other.size()];
        for(int i = 0; i < this->size(); i++)
            this->data[i] = other.data[i];
    }

    virtual ~Array() { delete [] data; }

    Array &operator=(const Array &other)
    {
        this->lenght = other.size();
        this->data = new T[other.size()];
        for(int i = 0; i < this->size(); i++)
            this->data[i] = other.data[i];
        return(*this);
    }

    T& operator[](unsigned int index)
    {
        if (static_cast<unsigned int>(this->lenght) <= index)
            throw ArrException();
        return (this->data[index]);
    }


    class ArrException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return("You have exceeded the array limit ");
        }
    };

    int size() const
    {
        return(this->lenght);
    }
};

#endif

