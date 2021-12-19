#include "easyfind.hpp"


int main()
{
    std::vector<int> var;
    var.push_back(666);
    var.push_back(777);
    var.push_back(8);

    try
    {
        std::vector<int>::const_iterator res = easyfind(var, 8);
        std::cout << *res << std::endl;
        res--;
        std::cout << *res << std::endl;
        res--;
        std::cout << *res << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "no matches found" << '\n';
    }
    std::deque<int> num;
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.push_front(0);
    num.push_front(2);
    num.push_front(1);
    try
    {
        std::deque<int>::const_iterator val = easyfind(num, 4);
        std::cout << *val << std::endl;
        val++;     
        std::cout << *val << std::endl;
        val -= 3;
        std::cout << *val << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "no matches found" << '\n';
    }
    
}





// std::vector<"тип данных"> "имя переменной("количество элем", "число в элементах")"




//    std::vector;
//      .push_back(n) - поместить элемент n в конец вектороа
//      .size() - получить размер вектора
//      .at(n) - получить элемент по индексу n обработется исулючением out_of_range
//      .clear() - очистить вектор от всех элементов
//      .pop_back() - удалить последний элемент
//      .capacity() - количество свободных индексов почти как size(); 
//      .reserve(n) - выделить память под n ячеек
//      .shrink_to_fit(); - урезать незанятые элементы вектора
//      .empty(n) - пуст или не пауст вектор  (bool)
//      .resize("количество элем", "число в элементах") - переопределить вектор
//      .insert(итератор, значение или диапозон значений) - добавляет в контейнер новые значения
//      .erase(итератор )удалить значение

//    std::deque - такой эе как и vector но имеет.push_front и может расти сначала

//    std::array;

//    std::list;

//    std::forward_list;

//    std::basic_string.