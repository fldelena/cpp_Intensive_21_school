#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat one("Viktor", 50);
    Bureaucrat two("Ignat", 40);
    Form doc_one("Vedomost'", 100, 120);
    Form doc_two("Otchet", 70, 100);
    try
    {
        two.DownGrade(100);
        std::cout << two << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << two.getName() << " " << e.what() << std::endl;
    }
    
    two.signForm(doc_one);
    one.signForm(doc_two);

    
    return (0);
}