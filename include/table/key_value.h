#pragma once

#include <string>

template <typename V>
struct KeyValue
{
    std::string key;
    V value;
};
