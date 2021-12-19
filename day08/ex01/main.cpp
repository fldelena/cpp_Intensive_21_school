#include "span.hpp"
int main()
{
    Span sp = Span(20);
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(19);
    }
    catch(const std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        std::vector<int> qwe(7, 99); 
        sp.moreAddNumber(qwe.begin(), qwe.end());
    }
    catch(const std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}