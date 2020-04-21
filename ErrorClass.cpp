#include "ErrorClass.h"

#include <iostream>

ErrorClass::ErrorClass(const std::string& arg)
{
    std::cout << arg << std::endl;
}


int ErrorClass::overrideMethod()
{
    return 0;
}
