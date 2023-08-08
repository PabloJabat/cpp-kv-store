#include "../../include/table/in_memory.h"

template <>
InMemoryTable<char, char>::InMemoryTable(int size) : data(new KeyValue *[size])
{
    for (int i = 0; i < size; ++i)
    {
        data[i] = nullptr;
    }
}