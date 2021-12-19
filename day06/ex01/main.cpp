#include "header.hpp"


int main()
{
    setlocale(LC_ALL, "ru");

    Data one;
    uintptr_t two = serialize(&one);
    Data *three = deserialize(two);
    
    std::cout << "Значение первого указателя: " << &one << std::endl;
    std::cout << "Значение возвращаемого указателя: " << three << std::endl;
    if (&one == three)
        std::cout<< "Они равны" << std::endl;
    else
        std::cout<< "Они не равны" << std::endl;
    return (0);
}