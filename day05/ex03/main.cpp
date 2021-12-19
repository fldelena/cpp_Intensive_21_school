#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern_one;
    Bureaucrat qwe("lolol", 1);
    Form* rtf;
    Form* one;
    Form* two;


    rtf = intern_one.makeForm("robotomy request", "Bender");
    one = intern_one.makeForm("shrubbery creation", "Vizako");
    two = intern_one.makeForm("presidential pardon", "Chikantus");

    qwe.signForm(*two);
    qwe.executeForm(*two);
    qwe.signForm(*rtf);
    qwe.executeForm(*rtf);
    qwe.signForm(*one);
    qwe.executeForm(*one);
    std::cout << "========================================================"<<std::endl;
    std::cout << *rtf << std::endl;
    std::cout << *one << std::endl;
    std::cout << *two << std::endl;
    std::cout << "========================================================"<<std::endl;
    try
    {
    Bureaucrat vasya("Vasili", 150);
    }
    catch(const std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }
}