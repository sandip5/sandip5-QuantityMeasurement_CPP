#include "unit.h"

unit::unit(double value, util_spc::UNIT_TYPE type) : value(value), type(type) {}

const unit unit::INCH(1.0, util_spc::UNIT_TYPE::LENGTH);

const unit unit::FEET(12.0, util_spc::UNIT_TYPE::LENGTH);