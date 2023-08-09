#include <string>
#include "../../include/table/in_memory.h"
#include "../../include/table/table_exceptions.h"

template <typename V>
InMemoryTable<V>::InMemoryTable(int sz) : size(sz)
{
    for (int i = 0; i < size; ++i)
    {
        internal_table[i] = nullptr;
    }
};

template <typename V>
int InMemoryTable<V>::hash_function(std::string key)
{
    int total = 0;
    for (char character : key)
    {
        total += static_cast<int>(character);
    }
    return total % size;
};

template <typename V>
void InMemoryTable<V>::put(KeyValue<V> key_value)
{
    int pos = hash_function(key_value.key);
    KeyValue<V> slot = internal_table[pos];
    if (slot == nullptr)
    {
        *slot = key_value;
    }
    else
    {
        throw CollissionException("slot alreayd in use");
    }
};
