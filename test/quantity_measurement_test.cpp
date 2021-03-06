#include "../main/model/quantity.h"
#include <gtest/gtest.h>

TEST(LengthComparisionTest, _zero_feet_and_zero_feet_should_be_equal)
{
    quantity first_zero_feet(0.0, unit::FEET);
    quantity second_zero_feet(0.0, unit::FEET);
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(LengthComparisionTest, _null_feet_and_one_feet__should_not_be_equal)
{
    quantity first_one_feet(1.0, unit::FEET);
    ASSERT_NE(&first_one_feet, nullptr);
}

TEST(LengthComparisionTest, _first_feet_object_and_second_ref_of_first_ref_should_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::FEET);
    quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthComparisionTest, _first_type_and_second_type_should_not_be_equal)
{
    quantity first_type(1.0, unit::FEET);
    quantity second_type(1.0, unit::INCH);
    ASSERT_NE(first_type, second_type);
}

TEST(LengthComparisionTest, _one_feet_and_twelve_inch__should_be_equal)
{
    quantity value_in_feet(1.0, unit::FEET);
    quantity value_in_inch(12.0, unit::INCH);
    ASSERT_EQ(value_in_feet, value_in_inch);
}

TEST(LengthComparisionTest, _null_inch_and_one_inch__should_not_be_equal)
{
    quantity first_one_inch(1.0, unit::INCH);
    ASSERT_NE(&first_one_inch, nullptr);
}

TEST(LengthComparisionTest, _first_inch_object_and_second_ref_of_first_ref_should_be_equal)
{
    quantity *first_ref = new quantity(1.0, unit::INCH);
    quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(LengthComparisionTest, _first_inch_type_and_second_type_feet_should_not_be_equal)
{
    quantity first_type(1.0, unit::INCH);
    quantity second_type(1.0, unit::FEET);
    ASSERT_NE(first_type, second_type);
}

TEST(LengthComparisionTest, _zero_inch_and_zero_inch_should_be_equal)
{
    quantity first_zero_inch(0.0, unit::INCH);
    quantity second_zero_inch(0.0, unit::INCH);
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(LengthComparisionTest, _three_feet_and_one_yard__should_be_equal)
{
    quantity value_in_feet(3.0, unit::FEET);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_EQ(value_in_feet, value_in_yard);
}

TEST(LengthComparisionTest, _one_feet_and_one_yard__should_not_be_equal)
{
    quantity value_in_feet(1.0, unit::FEET);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_NE(value_in_feet, value_in_yard);
}

TEST(LengthComparisionTest, _one_inch_and_one_yard__should_not_be_equal)
{
    quantity value_in_inch(1.0, unit::INCH);
    quantity value_in_yard(1.0, unit::YARD);
    ASSERT_NE(value_in_inch, value_in_yard);
}

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

TEST(LengthComparisionTest, _addition_of_two_inch_and_two_inch__should_be_four_inch)
{
    quantity first_inch(2.0, unit::INCH);
    quantity second_inch(2.0, unit::INCH);
    quantity four_inch(4.0, unit::INCH);
    ASSERT_EQ(four_inch, first_inch + second_inch);
}

TEST(LengthComparisionTest, _addition_of_one_feet_and_two_inch__should_be_fourteen_inch)
{
    quantity first_feet(1.0, unit::FEET);
    quantity second_inch(2.0, unit::INCH);
    quantity fourteen_inch(14.0, unit::INCH);
    ASSERT_EQ(fourteen_inch, first_feet + second_inch);
}

TEST(LengthComparisionTest, _addition_of_one_feet_and_one_feet__should_be_twentyfour_inch)
{
    quantity first_feet(1.0, unit::FEET);
    quantity second_feet(1.0, unit::FEET);
    quantity twenty_four_inch(24.0, unit::INCH);
    ASSERT_EQ(twenty_four_inch, first_feet + second_feet);
}

TEST(LengthComparisionTest, _addition_of_two_inch_and_two_and_half_cm__should_be_three_inch)
{
    quantity first_inch(2.0, unit::INCH);
    quantity second_cm(2.5, unit::CM);
    quantity three_inch(3.0, unit::INCH);
    ASSERT_EQ(three_inch, first_inch + second_cm);
}

TEST(VolumeComparisionTest, _one_gallon_and_three_point_seven_eight_litre_should_be_equal)
{
    quantity value_in_gallon(1.0, unit::GALLON);
    quantity value_in_litre(3.78, unit::LITRE);
    ASSERT_EQ(value_in_gallon, value_in_litre);
}

TEST(VolumeComparisionTest, _one_litre_and_thousand_ml_should_be_equal)
{
    quantity value_in_litre(1.0, unit::LITRE);
    quantity value_in_ml(1000.0, unit::ML);
    ASSERT_EQ(value_in_litre, value_in_ml);
}

TEST(VolumeComparisionTest,
     _addition_of_one_gallon_and_three_point_seven_eight_litre_should_be_seven_point_five_six_litre)
{
    quantity first_gallon(1.0, unit::GALLON);
    quantity second_litre(3.78, unit::LITRE);
    quantity _7_point_56_litere(7.56, unit::LITRE);
    ASSERT_EQ(_7_point_56_litere, first_gallon + second_litre);
}

TEST(VolumeComparisionTest, _addition_of_one_litre_and_thousand_ml_should_be_two_litre)
{
    quantity first_litre(1.0, unit::LITRE);
    quantity second_ml(1000.0, unit::ML);
    quantity two_litres(2.0, unit::LITRE);
    ASSERT_EQ(two_litres, first_litre + second_ml);
}

TEST(WeightComparisionTest, _one_kg_and_thousand_gram_should_be_equal)
{
    quantity value_in_kg(1.0, unit::KG);
    quantity value_in_gram(1000.0, unit::GRAM);
    ASSERT_EQ(value_in_kg, value_in_gram);
}

TEST(WeightComparisionTest, _one_tonne_and_thousand_kg_should_be_equal)
{
    quantity value_in_tonne(1.0, unit::TONNE);
    quantity value_in_kg(1000.0, unit::KG);
    ASSERT_EQ(value_in_tonne, value_in_kg);
}

TEST(WeightComparisionTest, _addition_of_one_tonne_and_thousand_kg_should_be_thousand_one_kg)
{
    quantity first_tonne(1.0, unit::TONNE);
    quantity second_kg(1.0, unit::KG);
    quantity one_thousand_one_kg(1001.0, unit::KG);
    ASSERT_EQ(one_thousand_one_kg, first_tonne + second_kg);
}

TEST(TemperatureComparisionTest, _212F_and_100C_should_be_equal)
{
    quantity value_in_fahrenheit(212.0, unit::FAHRENHEIT);
    quantity value_in_celsius(100.0, unit::CELSIUS);
    ASSERT_EQ(value_in_fahrenheit, value_in_celsius);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}