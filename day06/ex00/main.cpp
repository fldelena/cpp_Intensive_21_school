#include "cast.hpp"

bool kost(char *qwe)
{
    if (qwe[0] > 57 ||qwe[0] < 48)
        return false;
    return true;
}

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc != 2)
    {
        std::cout << "Error: incorrect number of arguments" << std::endl;
        exit(0);
    }

    double s = atof(argv[1]);

    Cast a(s);

    std::cout << "char: ";
    if (kost(argv[1]))
    {
        if(a.GetInt()< 33 || a.GetInt() > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout <<"'"<< a.GetChar() <<"'"<< std::endl;
    }
    else
        std::cout << "impossible" << std::endl;

    std::cout << "int: ";
    if (a.GetInt() != -2147483648)
    {
        std::cout << a.GetInt() <<std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
        
    std::cout << "float: " << std::fixed << std::setprecision(1) << a.GetFloat() << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) <<  a.GetDouble() <<std::endl;

    return(0);
}