#ifndef FORM_HPP
#define FORM_HPP
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
    virtual ~Form();
    Form &operator=(const Form &other);

    const std::string   GetName();
    bool                GetSigned();
    int                 GetGrdToSign();
    int                 GetGrdToMake();
    virtual void        beSigned(Bureaucrat &other) = 0;
    virtual void        execute(Bureaucrat const &executor) const = 0;

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