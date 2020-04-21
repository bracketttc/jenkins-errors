#ifndef ERROR_CLASS_H_INCLUDED
#define ERROR_CLASS_H_INCLUDED

#include <string>

#include "ParentClass.h"

class ErrorClass : public ParentClass
{
public:
    // single argument constructor should be explicit
    ErrorClass( const std::string& );

    virtual ~ErrorClass()
    {}

    virtual int overrideMethod();
};

#endif // ERROR_CLASS_H_INCLUDED
