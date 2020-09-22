#include "../main/model/quantity_measurement.h"
#include "../main/model/feet.h"
#include "../main/model/inch.h"
#include <typeinfo>
#include <gtest/gtest.h>

TEST(LengthComparisionTest, _one_feet_and_twelve_inch__should_be_equal)
{
    feet value_in_feet(1);
    quantity_measurement<feet> quantity(&value_in_feet);
    ASSERT_EQ(12.0, quantity.unit_converter());
}

TEST(LengthComparisionTest, _zero_feet_and_zero_feet_should_be_equal)
{
    feet first_zero_feet(0);
    feet second_zero_feet(0);
    quantity_measurement<feet> first_quantity(&first_zero_feet);
    quantity_measurement<feet> second_quantity(&second_zero_feet);
    ASSERT_EQ(first_quantity, second_quantity);
}

TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    feet first_one_feet(1);
    quantity_measurement<feet> first_quantity(&first_one_feet);
    ASSERT_FALSE(first_quantity == nullptr);
}

TEST(LengthComparisionTest, _first_object_and_second_ref__should_be_equal)
{
    feet first_feet(1);
    quantity_measurement<feet> *first_ref = new quantity_measurement<feet>(&first_feet);
    quantity_measurement<feet> *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthComparisionTest, _first_ref_and_second_ref__should_not_be_equal)
{
    feet first_feet(1);
    feet second_feet(1);
    quantity_measurement<feet> *first_ref = new quantity_measurement<feet>(&first_feet);
    quantity_measurement<feet> *second_ref = new quantity_measurement<feet>(&second_feet);
    ASSERT_NE(first_ref, second_ref);
}

TEST(LengthComparisionTest, _first_type_and_second_type_should_not_be_equal)
{
    feet feet_value(1);
    inch inch_value(1);
    quantity_measurement<feet> first_type(&feet_value);
    quantity_measurement<inch> second_type(&inch_value);
    ASSERT_EQ(first_type, second_type);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
