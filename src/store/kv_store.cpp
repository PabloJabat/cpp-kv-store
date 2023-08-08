#include <iostream>
#include "../../include/store/kv_store.h"

template <>
KVStore<char>::KVStore(char *keys, char *values, int size)
{
    keys = keys;
    values = values;
    size = size;
}

template <>
char KVStore<char>::get(char key)
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