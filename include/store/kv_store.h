#pragma once

template <typename V>
class kv_store
{
private:
    char *keys;
    V *values;
    int size;

public:
    // constructor
    kv_store(char *keys, char *values, int size);
    char get(char key);
};
