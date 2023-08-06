#include <iostream>
#include "kv_store.h"

kv_store::kv_store(char *keys, char *values, int size)
{
    keys = keys;
    values = values;
    size = size;
}

char kv_store::get(char key)
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