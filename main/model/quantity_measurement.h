#include <iostream>

template <class UNIT_TYPE>
class quantity_measurement
{
    UNIT_TYPE *value;

public:
    quantity_measurement(UNIT_TYPE *value) : value(value) {}

    double unit_converter()
    {
        return this->value->get_value() * 12;
    }

    bool operator==(quantity_measurement other) const
    {
        return (this->value->get_value() == other.value->get_value() && typeid(this->value).name() == typeid(other.value).name());
    }

    bool operator==(quantity_measurement *other) const
    {
        if (other == nullptr)
        {
            return false;
        }

        return (this->value->get_value() == other->value->get_value());
    }

    bool operator!=(quantity_measurement *other) const
    {
        return !(this == other);
    }

    bool operator!=(quantity_measurement other) const
    {
        return !(*this == other);
    }
};