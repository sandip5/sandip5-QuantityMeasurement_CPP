#include "../utility/unit.h"

class quantity
{
public:
    double value;

    unit unit_type;

    quantity() {}

    quantity(double, unit);

    bool operator==(quantity *) const;

    bool operator==(quantity) const;

    bool operator!=(quantity *) const;

    bool operator!=(quantity) const;

    bool operator==(const util_spc::UNIT_TYPE) const;

    quantity operator+(quantity) const;
};