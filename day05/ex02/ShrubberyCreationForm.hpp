#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>


class ShrubberyCreationForm: public Form
{
private:
    const std::string   name;
    bool                sIgned;
    const int           grdToSign;
    const int           grdToMake;
    std::string         target;
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    bool    GetSigned();
    int     GetGrdToSign();
    int     GetGrdToMake();

    void        execute(Bureaucrat const &executor) const;
    void        beSigned(Bureaucrat &other);


};

#endif