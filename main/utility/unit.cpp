#include "unit.h"

unit::unit(double value, util_spc::UNIT_TYPE type) : value(value), type(type) {}

const unit unit::INCH(util_spc::INCH, util_spc::UNIT_TYPE::LENGTH);

const unit unit::FEET(util_spc::FEET, util_spc::UNIT_TYPE::LENGTH);

const unit unit::YARD(util_spc::YARD, util_spc::UNIT_TYPE::LENGTH);

const unit unit::CM(util_spc::CM, util_spc::UNIT_TYPE::LENGTH);