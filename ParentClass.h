#ifndef PARENT_CLASS_H_INCLUDED
#define PARENT_CLASS_H_INCLUDED

class ParentClass
{
public:
    virtual ~ParentClass()
    {}

    virtual int overrideMethod() = 0;
};

#endif // PARENT_CLASS_H_INCLUDED
