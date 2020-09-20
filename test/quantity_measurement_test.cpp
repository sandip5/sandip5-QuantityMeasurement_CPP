#include "../main/model/quantity_measurement.h"
#include "../main/model/feet.h"
#include <gtest/gtest.h>

TEST(LengthComparisionTest, _one_feet_and_twelve_inch__should_be_equal)
{
    quantity_measurement quantity;
    ASSERT_EQ(12, quantity.unit_converter(1));
}

TEST(LengthComparisionTest, _zero_feet_and_zero_feet_should_be_equal)
{
    feet first_zero_feet(0);
    feet second_zero_feet(0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    feet first_one_feet(1);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(LengthComparisionTest, _first_object_and_second_ref__should_be_equal)
{
    feet *first_ref = new feet(1);
    feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthComparisionTest, _first_ref_and_second_ref__should_be_equal)
{
    feet *first_ref = new feet(1);
    feet *second_ref = new feet(2);
    ASSERT_NE(first_ref, second_ref);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
