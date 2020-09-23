#include "unit.h"

unit::unit(double value, util_spc::UNIT_TYPE type) : value(value), type(type) {}

const unit unit::INCH(util_spc::UNIT_BASE_FACTOR::INCH, util_spc::UNIT_TYPE::LENGTH);

const unit unit::FEET(util_spc::UNIT_BASE_FACTOR::FEET, util_spc::UNIT_TYPE::LENGTH);

const unit unit::YARD(util_spc::UNIT_BASE_FACTOR::YARD, util_spc::UNIT_TYPE::LENGTH);