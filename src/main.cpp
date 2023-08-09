#include <iostream>
#include "../include/store/kv_store.h"

int main()
{
    std::cout << "Hello World" << std::endl;

    const int SIZE = 5;

    std::hash<char> has_function = std::hash<char>();
    std::size_t a = has_function('1');

    char keys[SIZE] = {'1', '2', '3', '4', '5'};
    char values[SIZE] = {'A', 'B', 'C', 'D', 'E'};

    char *keys_ptr = &keys[0];
    char *values_ptr = &values[0];

    KVStore<char> store = KVStore<char>(keys_ptr, values_ptr, SIZE);

    std::cout << "This is the result: " << store.get('6') << std::endl;

    return 0;
}