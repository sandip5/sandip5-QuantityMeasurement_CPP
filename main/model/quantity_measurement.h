#include "quantity.h"

class quantity_measurement
{
private:
    quantity *first_quantity;
    quantity *second_quantity;

public:
    quantity_measurement(quantity *, quantity *);
    double add_quantity(const double);
};