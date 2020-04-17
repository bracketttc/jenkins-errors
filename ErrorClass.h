#ifndef ERROR_CLASS_H_INCLUDED
#define ERROR_CLASS_H_INCLUDED

#include <string>

class ErrorClass
{
public:
    // single argument constructor should be explicit
    ErrorClass( const std::string& );

    ~ErrorClass()
    {}
};

#endif // ERROR_CLASS_H_INCLUDED
