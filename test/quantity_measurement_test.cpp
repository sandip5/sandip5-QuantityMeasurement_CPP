#include "../main/feet.h"
#include <gtest/gtest.h>

TEST(FeetTests, _zero_feet_and_zero_feet__should_be_equal)
{
    Feet first_zero_feet(0), second_zero_feet(0);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTests, _null_feet_and_one_feet__should_not_be_equal)
{
    Feet first_zero_feet(1);
    ASSERT_FALSE(first_zero_feet == nullptr);
}

TEST(FeetTests, _one_object_and_second_ref__should_be_equal)
{
    Feet *first_ref = new Feet(1);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
