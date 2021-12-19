#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
    Bureaucrat two("Ignat", 140);
    PresidentialPardonForm dud("LOOOOL");
    ShrubberyCreationForm kuk("KUSTARNIK");
    RobotomyRequestForm lul("Banka");
    try
    {
        two.signForm(dud);
        two.UpGrade(130);
        two.signForm(dud);
        two.UpGrade(15);
        two.signForm(kuk);
        two.signForm(lul);
        std::cout << "===================================" <<std::endl; 
        two.executeForm(dud);
        std::cout << "===================================" <<std::endl; 
        two.executeForm(kuk);
        std::cout << "===================================" <<std::endl; 
        two.executeForm(lul);
        std::cout << "===================================" <<std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cout << two.getName() << " " << e.what() << std::endl;
        std::cout << e.what() << std::endl;
    }
    return (0);
}