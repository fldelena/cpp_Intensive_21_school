#include "header.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t abc = reinterpret_cast<uintptr_t>(ptr);
    return (abc);
}


Data* deserialize(uintptr_t raw)
{
    Data *xyz = reinterpret_cast<Data *>(raw);
    return (xyz);
}
