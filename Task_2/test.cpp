#include "pch.h"
#include "C:\Users\Vova\source\repos\Unit_test\Unit_test\main.cpp"

TEST(IsLeapYearTest, NotDivisibleBy4) 
{
    EXPECT_FALSE(IsLeapYear(1997));
    EXPECT_FALSE(IsLeapYear(1999));
}


TEST(IsLeapYearTest, DivisibleBy4Not100) 
{
    EXPECT_TRUE(IsLeapYear(1996));
    EXPECT_TRUE(IsLeapYear(2004));
}


TEST(IsLeapYearTest, DivisibleBy100Not400) 
{
    EXPECT_FALSE(IsLeapYear(1900));
    EXPECT_FALSE(IsLeapYear(2100));
}


TEST(IsLeapYearTest, DivisibleBy400) 
{
    EXPECT_TRUE(IsLeapYear(2000));
    EXPECT_TRUE(IsLeapYear(2400));
}

TEST(IsLeapYearTest, NegativeYear) 
{
    EXPECT_TRUE(IsLeapYear(-400)); 
    EXPECT_FALSE(IsLeapYear(-100)); 
    EXPECT_TRUE(IsLeapYear(-4)); 
    EXPECT_FALSE(IsLeapYear(-1)); 
}


TEST(IsLeapYearTest, ZeroYear) 
{
    EXPECT_TRUE(IsLeapYear(0)); 
}