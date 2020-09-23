#include "utils.h"

class unit
{
public:
    double value;

    util_spc::UNIT_TYPE type;

    unit() {}

private:
    unit(double value, util_spc::UNIT_TYPE type);

public:
    static const unit INCH;
    static const unit FEET;
    static const unit YARD;
};