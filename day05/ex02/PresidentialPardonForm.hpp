#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"


class PresidentialPardonForm: public Form
{
private:
    const std::string   name;
    bool                sIgned;
    const int           grdToSign;
    const int           grdToMake;
    std::string         target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

    bool    GetSigned();
    int     GetGrdToSign();
    int     GetGrdToMake();

    void        execute(Bureaucrat const &executor) const;
    void        beSigned(Bureaucrat &other);


};

#endif