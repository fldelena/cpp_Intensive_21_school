#include "phonebook.hpp"



int main()
{
    phonebook   crappy;
    std::string str;
    crappy.count = 0;

    while (1)
    {
        std::cout << "enter the command: ";
        std::getline(std::cin, str);

        if (my_strcmp(str, "EXIT"))
        {
            std::cout << "Bye bye =)" << std::endl;
            return (0);
        }
        else if (my_strcmp(str, "ADD"))
            crappy.add_cont(crappy.count);
        else if (my_strcmp(str, "SEARCH"))
            crappy.sch_cont(crappy.count);
        else
        {
            std::cout << "wrong command" << std::endl;
            std::cout << "available options: \"ADD\" \"SEARCH\" \"EXIT\"" << std::endl;
        }
    }
    return (0);
}

