#include "pch.h"
#include "C:\Users\Vova\source\repos\Unit_test\Unit_test\main.cpp"

TEST(GetProductsAmountTest, EmptyVector) {
    std::vector<int> prices = {};
    EXPECT_EQ(GetProductsAmount(prices, 100), 0);
}


TEST(GetProductsAmountTest, ZeroMoney) {
    std::vector<int> prices = { 10, 20, 30 };
    EXPECT_EQ(GetProductsAmount(prices, 0), 0);
}


TEST(GetProductsAmountTest, SingleItemWithinBudget) {
    std::vector<int> prices = { 50 };
    EXPECT_EQ(GetProductsAmount(prices, 100), 1);
}


TEST(GetProductsAmountTest, SingleItemExceedsBudget) {
    std::vector<int> prices = { 150 };
    EXPECT_EQ(GetProductsAmount(prices, 100), 0);
}


TEST(GetProductsAmountTest, AllItemsWithinBudget) {
    std::vector<int> prices = { 10, 20, 30 };
    EXPECT_EQ(GetProductsAmount(prices, 60), 3);
}


TEST(GetProductsAmountTest, PartialPurchase) {
    std::vector<int> prices = { 10, 20, 30, 40 };
    EXPECT_EQ(GetProductsAmount(prices, 50), 2); 
}


TEST(GetProductsAmountTest, NegativePrices) {
    std::vector<int> prices = { -10, 20, 30 };
    EXPECT_EQ(GetProductsAmount(prices, 40), 3); 
}


TEST(GetProductsAmountTest, LargeValues) {
    std::vector<int> prices = { 1000, 2000, 3000 };
    EXPECT_EQ(GetProductsAmount(prices, 6000), 3);
}
