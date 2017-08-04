#include "Parameter.h"
Parameter::Parameter(T default_value)
{
    //ctor
}

Parameter::~Parameter()
{
    //dtor
}

Parameter::Parameter(const Parameter& other)
{
    //copy ctor
}

Parameter& Parameter::operator=(const Parameter& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
