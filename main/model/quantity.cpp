#include "quantity.h"

quantity::quantity(double value, unit unit_type) : unit_type(unit_type), value(value * (unit_type.value)) {}

bool quantity::operator==(quantity *other) const
{
    if (other == nullptr)
    {
        return false;
    }

    if (this->unit_type.type == other->unit_type.type && this->unit_type.value == other->unit_type.value)
    {
        return (this->value == other->value);
    }

    if (this->unit_type.type == other->unit_type.type)
    {
        return (this->value == other->value);
    }

    return false;
}

bool quantity::operator==(quantity other) const
{
    if (this->unit_type.type == other.unit_type.type && this->unit_type.value == other.unit_type.value)
    {
        return (this->value == other.value);
    }

    if (this->unit_type.type == other.unit_type.type)
    {
        if (this->unit_type.value == 1.8)
        {
            return (this->value + 32.0 == other.value);
        }

        if (other.unit_type.value == 1.8)
        {
            return (this->value == other.value + 32.0);
        }

        return (this->value == other.value);
    }

    return false;
}

bool quantity::operator!=(quantity *other) const
{
    if (this->unit_type.type == other->unit_type.type && this->unit_type.value == other->unit_type.value)
    {
        return (this->value == other->value);
    }

    return (this->unit_type.type == other->unit_type.type);
}

bool quantity::operator!=(quantity other) const
{
    if (this->unit_type.type == other.unit_type.type && this->unit_type.value == other.unit_type.value)
    {
        return (this->value == other.value);
    }

    return (this->unit_type.type == other.unit_type.type);
}