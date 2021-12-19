#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\"str\" variable if located at:\t\t" << &str << std::endl;
    std::cout << "\"stringPTR\" variable if located at:\t" << stringPTR << std::endl;
    std::cout << "\"stringREF\" variable if located at:\t" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The \"str\" variable points to a string:\t\t" << str << std::endl;
    std::cout << "The \"stringPTR\" variable points to a string:\t" << *stringPTR << std::endl;
    std::cout << "The \"stringREF\" variable points to a string:\t" << stringREF << std::endl;
}