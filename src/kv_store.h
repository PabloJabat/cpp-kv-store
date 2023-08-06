#pragma once

#ifndef KV_STORE_H
#define KV_STORE_H

class kv_store
{
private:
    char *keys;
    char *values;
    int size;

public:
    // constructor
    kv_store(char *keys, char *values, int size);
    char get(char key);
};

#endif