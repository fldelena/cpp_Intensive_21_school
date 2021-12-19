#ifndef H_BRAIN
# define H_BRAIN
# include <string>
# include <iostream>

class Brain
{
protected:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain & other);
    ~Brain();
    Brain& operator=(const Brain& other);
};

#endif