#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "size : "<<  mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "-----------------------------" << std::endl;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl << "-----------------------------" << std::endl;
    std::stack<int> s(mstack);

    MutantStack<const char *> chstack;
    chstack.push("ololo");
    chstack.push("kekek");
    chstack.pop();
    chstack.push("hello");
    chstack.push("dear");
    chstack.push("friend!!!");
    std::cout << "size : "<< chstack.size() << std::endl;
    MutantStack<const char *>::iterator itc = chstack.begin();
    MutantStack<const char *>::iterator itce = chstack.end();
    std::cout << "-----------------------------" << std::endl;
    while (itc != itce)
    {
        std::cout << *itc << " ";
        ++itc;
    }
    std::cout << std::endl << "-----------------------------" << std::endl;

    MutantStack<double> dstack;
    dstack.push(1.23);
    dstack.push(3.45);
    dstack.push(6.78);
    dstack.push(9.01);
    dstack.push(2.34);
    dstack.pop();
    dstack.push(6.78);
    dstack.push(9.01);
    dstack.push(2.34);
    dstack.pop();
    MutantStack<double>::reverse_iterator itd = dstack.rbegin();
    MutantStack<double>::reverse_iterator itde = dstack.rend();
    std::cout << "size : "<< dstack.size() << std::endl;
    std::cout << "-----------------------------" << std::endl;
    while (itd != itde)
    {
        std::cout << *itd << " ";
        ++itd;
    }
    std::cout << std::endl << "-----------------------------" << std::endl;
    return 0;
}