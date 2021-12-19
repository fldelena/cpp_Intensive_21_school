#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat one("Viktor", 150);
    try
    {
        one.UpGrade(160);
        std::cout << one << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << one.getName() << " " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat two("Antoha", 160);
        std::cout << two << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat three("Ignat", 40);
    try
    {
        three.DownGrade(120);
        std::cout << three << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << three.getName() << " " << e.what() << std::endl;
    }
    
    
    return (0);
}