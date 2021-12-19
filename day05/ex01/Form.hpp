#ifndef H_FORM
#define H_FORM
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                sIgned;
    const int           grdToSign;
    const int           grdToMake;
public:
    Form();
    Form(std::string Name, const int grdToSign, const int grdToMake);
    Form(const Form &other);
    ~Form();
    Form &operator=(const Form &other);

    const std::string   GetName();
    bool                GetSigned();
    int                 GetGrdToSign();
    int                 GetGrdToMake();
    void                beSigned(Bureaucrat &other);

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &ret, const Form &other);

#endif