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
    static const unit CM;
    static const unit GALLON;
    static const unit LITRE;
    static const unit ML;
    static const unit KG;
    static const unit GRAM;
};