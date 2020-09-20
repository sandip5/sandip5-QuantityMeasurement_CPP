#include "feet.h"

feet::feet(double value)
{
    this->value = value;
}

bool feet::operator==(feet other) const
{
    return (this->value == other.value);
}