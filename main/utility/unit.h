#include "utils.h"

class unit
{
public:
    double conversion_factor;

    util_spc::UNIT_TYPE type;

    unit() {}

private:
    unit(double, util_spc::UNIT_TYPE);

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
    static const unit TONNE;
    static const unit FAHRENHEIT;
    static const unit CELSIUS;
};