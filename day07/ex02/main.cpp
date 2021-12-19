#include "Array.hpp"
#define EX 0

int main()
{
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~int~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Array<int> i_arr(5);
    for (int i = 0; i < i_arr.size(); i++)
        i_arr[i] = i;
    try
    {
        for (int i = 0; i < (i_arr.size() + EX); i++)
            std::cout << i_arr[i] << ", ";
        std::cout << "\nYou have reached the end of the array" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"\n"<< e.what() << i_arr.size() << " elements long" << std::endl;
    }
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~double~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Array<double> d_arr(5);
    for (int i = 0; i < d_arr.size(); i++)
        d_arr[i] = (double)(i * 3)/2;
    try
    {
        for (int i = 0; i < (d_arr.size() + EX); i++)
            std::cout << d_arr[i] << ", ";
        std::cout << "\nYou have reached the end of the array" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"\n"<< e.what() << d_arr.size() << " elements long" << std::endl;
    }
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~string~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
    Array<std::string> s_arr(5);
    s_arr[0] = "pick";
    s_arr[1] = "up";
    s_arr[2] = "the";
    s_arr[3] = "phone";
    s_arr[4] = "baby";
    try
    {
        for (int i = 0; i < (s_arr.size() + EX); i++)
            std::cout << s_arr[i] << " ";
        std::cout << "\nYou have reached the end of the array" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"\n"<< e.what() << s_arr.size() << " elements long" << std::endl;
    }



    return (0);
}