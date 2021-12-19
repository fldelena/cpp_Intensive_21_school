#include "Base.hpp"

int main()
{
    setlocale(LC_ALL, "ru");

    Base *a = generate();
    identify(a);
    identify(*a);

    return (0);
}