class vector
{
private:
    int *__elem;
    int __size;

public:
    vector(int sz);
    int operator[](int pos);
    int size();
};
