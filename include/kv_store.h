#ifndef KV_STORE_H
#define KV_STORE_H

class kv_store
{
private:
    char *keys;
    char *values;

public:
    // Constructore
    kv_store(char *keys, char *values, int size);

    // CRUD operations
    void insert(char key, char value);
    void remove(char key);
    void update(char key, char value);
    char get(char key);
};

#endif // KV_STORE_H