#pragma once

#include <string>
#include "key_value.h"

template <typename V>
class InMemoryTable
{
private:
    // Variables
    int size;
    KeyValue<V> *internal_table;

    // Hash function
    int hash_function(std::string key);

public:
    // Constructor
    InMemoryTable(int size);

    // CRUD Operations
    void put(KeyValue<V> key_value);
    V get(std::string key);
};