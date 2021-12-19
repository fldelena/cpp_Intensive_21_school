#include "phonebook.hpp"

int my_strcmp(std::string str, std::string dst)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (dst[i] == '\0')
            return(0);
        if (str[i] != dst[i])
            return(0);
        i++;
    }
    if (str[i] == '\0' && dst[i] != '\0')
        return (0);
    return (1);
}

int my_strlen(std::string str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
