#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{

}

Intern::Intern(const Intern &other){ 
    *this = other; }

Intern &Intern::operator=(Intern const &other){ 
    (void) other;
    return (*this);}


Form* Intern::makeForm(const std::string &form, const std::string &target)
{
    std::string arr[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    typedef Form *(Intern::*funcs) (const std::string &target);
    funcs f[3] = {&Intern::Robotomy, &Intern::Shrubbery, &Intern::President};
    for (int i = 0; i < 3; i++){
        if (form == arr[i]) {
            return (this->*f[i])(target);
        }
    }
    std::cout << "program error" << std::endl;
    exit (0);
}

Form *Intern::Shrubbery(const std::string &target)
{
    std::cout << "ShrubberyCreationForm targeted of " << target << std::endl;
    return new ShrubberyCreationForm(target);
}

Form *Intern::Robotomy(const std::string &target)
{
    std::cout << "RobotomyRequestForm targeted of " << target << std::endl;
    return new RobotomyRequestForm(target);
}

Form *Intern::President(const std::string &target)
{
    std::cout << "PresidentialPardonForm targeted of " << target << std::endl;
    return new PresidentialPardonForm(target);
}