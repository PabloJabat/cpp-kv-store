template <typename K, typename V>
class InMemoryTable
{
public:
    void put(K key, V value);
    V get(K key);

private:
    struct KeyValue
    {
        K key;
        V value;
    };
    KeyValue **data;
};