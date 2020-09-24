#include "quantity.h"

quantity::quantity(double value, unit unit_type) : unit_type(unit_type), value(value * (unit_type.conversion_factor)) {}

bool quantity::operator==(quantity *other) const
{
    if (other == nullptr)
    {
        return false;
    }

    if (this->unit_type.type == other->unit_type.type &&
        this->unit_type.conversion_factor == other->unit_type.conversion_factor)
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
    if (this->unit_type.type == other.unit_type.type &&
        this->unit_type.conversion_factor == other.unit_type.conversion_factor)
    {
        return (this->value == other.value);
    }

    if (this->unit_type.type == other.unit_type.type)
    {
        if (this->unit_type.conversion_factor == unit::CELSIUS.conversion_factor)
        {
            return (this->value + 32.0 == other.value);
        }

        if (other.unit_type.conversion_factor == unit::CELSIUS.conversion_factor)
        {
            return (this->value == other.value + 32.0);
        }

        if (this->unit_type.type == other.unit_type.type && this->value == other.value)
        {
            return (this->value == other.value);
        }

        return (this->value == other.value);
    }

    return false;
}

bool quantity::operator!=(quantity *other) const
{
    return !(this == other);
}

bool quantity::operator!=(quantity other) const
{
    return !(*this == other);
}

quantity quantity::operator+(quantity other) const
{
    quantity result_quantity;

    double added_value = this->value + other.value;

    result_quantity.value = added_value;

    result_quantity.unit_type = this->unit_type;

    return result_quantity;
}