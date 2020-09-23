#include "unit.h"

unit::unit(double value, util_spc::UNIT_TYPE type) : value(value), type(type) {}

const unit unit::INCH(util_spc::INCH, util_spc::UNIT_TYPE::LENGTH);

const unit unit::FEET(util_spc::FEET, util_spc::UNIT_TYPE::LENGTH);

const unit unit::YARD(util_spc::YARD, util_spc::UNIT_TYPE::LENGTH);

const unit unit::CM(util_spc::CM, util_spc::UNIT_TYPE::LENGTH);

const unit unit::GALLON(util_spc::GALLON, util_spc::UNIT_TYPE::VOLUME);

const unit unit::LITRE(util_spc::LITRE, util_spc::UNIT_TYPE::VOLUME);

const unit unit::ML(util_spc::ML, util_spc::UNIT_TYPE::VOLUME);

const unit unit::TONNE(util_spc::TONNE, util_spc::UNIT_TYPE::WEIGHT);

const unit unit::KG(util_spc::KG, util_spc::UNIT_TYPE::WEIGHT);

const unit unit::GRAM(util_spc::GRAM, util_spc::UNIT_TYPE::WEIGHT);