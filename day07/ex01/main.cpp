#include "iter.hpp"

int main( void ) 
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    char symbols[5] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "before: ";
    for (int i = 0; i < 5; i++)
        std::cout << symbols[i] << ", ";
    std::cout << std::endl;
    ::iter(symbols, 5, caesar);
    std::cout << "after: ";
    for (int i = 0; i < 5; i++)
        std::cout << symbols[i] << ", ";
    std::cout << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    int  numbers[5] = {23, 55, 34, 11, 8};
    std::cout << "before: ";
    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << ", ";
    std::cout << std::endl;
    ::iter(numbers, 5, halve);
    std::cout << "after: ";
    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << ", ";
    std::cout << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    std::string words[5] = {"hello", "my", "name", "is", "Emanuil"};
    ::iter(words, 5, print);

    return 0;
}