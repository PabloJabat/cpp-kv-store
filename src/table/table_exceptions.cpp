#include "../../include/table/table_exceptions.h"
#include <string>

CollissionException::CollissionException(const char *message) : msg(message){};
const char *CollissionException::what() const noexcept
{
    return msg.c_str();
};
