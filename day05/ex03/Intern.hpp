#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(const Intern &other);
    Intern & operator=(Intern const &other);
    
    Form* makeForm(const std::string &form, const std::string &target);
    Form *Shrubbery(const std::string &target);
    Form *Robotomy(const std::string &target);
    Form *President(const std::string &target);
};

#endif