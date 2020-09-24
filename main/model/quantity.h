#include "../utility/unit.h"

class quantity
{
public:
    double value;

    unit unit_type;

    quantity(double, unit);

    bool operator==(quantity *) const;

    bool operator==(quantity) const;

    bool operator!=(quantity *) const;

    bool operator!=(quantity) const;
};