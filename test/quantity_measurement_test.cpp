#include "../main/model/quantity.cpp"
#include <typeinfo>
#include <gtest/gtest.h>

//TC1.1
TEST(LengthComparisionTest, _one_feet_and_twelve_inch__should_be_equal)
{
    quantity value_in_feet(1.0, unit::FEET);
    quantity value_in_inch(12.0, unit::INCH);
    ASSERT_EQ(value_in_feet, value_in_inch);
}

//TC1.2
TEST(LengthComparisionTest, _zero_feet_and_zero_feet_should_be_equal)
{
    quantity first_zero_feet(0.0, unit::FEET);
    quantity second_zero_feet(0.0, unit::FEET);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

//TC1.3
TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    quantity first_one_feet(1.0, unit::FEET);
    ASSERT_FALSE(first_one_feet == nullptr);
}

//TC1.4
TEST(LengthComparisionTest, _first_feet_object_and_second_ref_of_first_ref_should_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::FEET);
    quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

//TC1.5
TEST(LengthComparisionTest, _first_ref_and_second_ref__should_not_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::FEET);
    quantity *second_ref = new quantity(1.0, unit::FEET);
    ASSERT_NE(first_ref, second_ref);
}

//TC1.6
TEST(LengthComparisionTest, _first_type_and_second_type_should_not_be_equal)
{
    quantity first_type(1.0, unit::FEET);
    quantity second_type(1.0, unit::INCH);
    ASSERT_NE(first_type, second_type);
}

//TC1.7
TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal)
{
    quantity first_one_inch(1.0, unit::INCH);
    ASSERT_NE(&first_one_inch, nullptr);
}

//TC1.8
TEST(LengthComparisionTest, _first_inch_object_and_second_ref_of_first_ref_should_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::INCH);
    quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

//TC1.8
TEST(LengthComparisionTest, _first_inch_ref_and_second_inch_ref__should_not_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::INCH);
    quantity *second_ref = new quantity(1.0, unit::INCH);
    ASSERT_NE(first_ref, second_ref);
}

//TC1.9
TEST(LengthComparisionTest, _first_inch_type_and_second_type_feet_should_not_be_equal)
{
    quantity first_type(1.0, unit::INCH);
    quantity second_type(1.0, unit::FEET);
    ASSERT_NE(first_type, second_type);
}

//TC1.10
TEST(LengthComparisionTest, _zero_inch_and_zero_inch_should_be_equal)
{
    quantity first_zero_inch(0.0, unit::INCH);
    quantity second_zero_inch(0.0, unit::INCH);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

//TC1.13
TEST(LengthComparisionTest, _three_feet_and_one_yard__should_be_equal)
{
    quantity value_in_feet(3.0, unit::FEET);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_EQ(value_in_feet, value_in_yard);
}

//TC1.14
TEST(LengthComparisionTest, _one_feet_and_one_yard__should_not_be_equal)
{
    quantity value_in_feet(1.0, unit::FEET);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_NE(value_in_feet, value_in_yard);
}

//TC1.15
TEST(LengthComparisionTest, _one_inch_and_one_yard__should_not_be_equal)
{
    quantity value_in_inch(1.0, unit::INCH);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_NE(value_in_inch, value_in_yard);
}

//TC1.16
TEST(LengthComparisionTest, _one_yard_and_thirty_six_inch__should_be_equal)
{
    quantity value_in_yard(1.0, unit::YARD);
    quantity value_in_inch(36.0, unit::INCH);
    ASSERT_EQ(value_in_yard, value_in_inch);
}

TEST(LengthComparisionTest, _two_inch_and_five_cm__should_be_equal)
{
    quantity value_in_inch(2.0, unit::INCH);
    quantity value_in_cm(5.0, unit::CM);
    ASSERT_EQ(value_in_inch, value_in_cm);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
