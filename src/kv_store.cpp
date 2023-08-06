#include <iostream>
#include "kv_store.h"

template <>
kv_store<char>::kv_store(char *keys, char *values, int size)
{
    keys = keys;
    values = values;
    size = size;
}

template <>
char kv_store<char>::get(char key)
{
    char *current_key = keys;
    int i = 0;
    while (i < size)
    {
        if (*(keys + i) == key)
        {
            return *(values + i);
        }
        i++;
    }
    if (i == size)
    {
        std::cerr << "Out of bounds"
                  << "[" << size << "]" << std::endl;
    }

    return '!';
}