#include <gtest/gtest.h>
#include "calc.hpp"

TEST(CalcTest, Addition) {
    EXPECT_EQ(2, add(1, 1));
    EXPECT_EQ(5, add(3, 2));
    EXPECT_EQ(10, add(7, 3));
}

TEST(CalcTest, Subtraction) {
    EXPECT_EQ(3, sub(5, 2));
    EXPECT_EQ(-10, sub(5, 15));
    EXPECT_EQ(0, sub(5, 5));
}

TEST(CalcTest, Multiplication) {
    EXPECT_EQ(10, mul(5, 2));
    EXPECT_EQ(10, mul(2, 5));
    EXPECT_EQ(-6, mul(-3, 2));
    EXPECT_EQ(9, mul(-3, -3));
}

TEST(CalcTest, Division) {
    EXPECT_EQ(5, div(10, 2));
    EXPECT_EQ(0.5, div(2, 4));
    EXPECT_EQ(-3, div(6, -2));
    EXPECT_EQ(1, div(-3, -3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}