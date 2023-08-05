#include <kv_store.h>

class kv_store
{
private:
    char *keys;
    char *values;
    int size;

public:
    // constructor
    kv_store::kv_store(char *keys, char *values, int size) : keys(keys), values(values), size(size){};

    char get(char key)
    {
        char *current_key = keys;
        for (int i = 0; i++; i < size)
        {
            if (*(keys + i) == key)
            {
                return *(values + i);
            }
        }
    }
};