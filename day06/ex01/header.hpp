#ifndef HEADER_HPP
# define HEADER_HPP
#include <iostream>
#include <string>


struct Data
{};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif