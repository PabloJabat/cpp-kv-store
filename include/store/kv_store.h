#pragma once

template <typename V>
class KVStore
{
private:
    char *keys;
    V *values;
    int size;

public:
    // constructor
    KVStore(char *keys, char *values, int size);
    char get(char key);
};
