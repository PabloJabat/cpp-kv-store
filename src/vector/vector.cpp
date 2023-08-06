#include <vector.h>
#include <stdexcept>

vector::vector(int size) : __elem(new int[size]), __size(size)
{
    if (__size < 0)
    {
        throw std::invalid_argument("size of vector has to be positive");
    }
};

int vector::operator[](int pos)
{
    if (pos < 0 || size() <= pos)
    {
        throw std::out_of_range{"Vector::operator[]"};
    }
    else
    {
        return __elem[pos];
    }
}

int vector::size()
{
    return __size;
}
