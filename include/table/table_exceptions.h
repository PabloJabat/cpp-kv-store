#include <exception>
#include <string>

class CollissionException : public std::exception
{
public:
    CollissionException(const char *message);
    virtual const char *what() const noexcept;

private:
    std::string msg;
};
