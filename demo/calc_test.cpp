#include "gtest/gtest.h"
#include "calc.hpp"

TEST(CalcTest, Addition) {
    ASSERT_EQ(2, add(1, 1));
    ASSERT_EQ(5, add(3, 2));
    ASSERT_EQ(10, add(7, 3));
}

TEST(CalcTest, Subtraction) {
    ASSERT_EQ(3, sub(5, 2));
    ASSERT_EQ(-10, sub(5, 15));
    ASSERT_EQ(0, sub(5, 5));
}

TEST(CalcTest, Multiplication) {
    ASSERT_EQ(10, mul(5, 2));
    ASSERT_EQ(10, mul(2, 5));
    ASSERT_EQ(-6, mul(-3, 2));
    ASSERT_EQ(9, mul(-3, -3));
}

TEST(CalcTest, Division) {
    ASSERT_EQ(5, div(10, 2));
    ASSERT_EQ(0.5, div(2, 4));
    ASSERT_EQ(-3, div(6, -2));
    ASSERT_EQ(1, div(-3, -3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
