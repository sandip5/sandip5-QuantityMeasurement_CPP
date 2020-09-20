#include "../main/model/quantity_measurement.h"
#include <gtest/gtest.h>

TEST(LengthComparisionTest, _one_feet_and_twelve_inch__should_be_equal)
{
    quantity_measurement quantity;
    ASSERT_EQ(12, quantity.unit_converter(1));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
