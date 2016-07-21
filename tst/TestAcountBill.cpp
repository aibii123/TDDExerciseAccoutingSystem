#include <gtest/gtest.h>

#include "Account.hpp"

class TestAccount : public ::testing::Test{

};

TEST(TestAccount, GivenGoldAcountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 1);
  
  EXPECT_EQ(GoldMainLineCost, bill);
}

TEST(TestAccount, GivenGoldAccountWithTwoLinesShallHaveMainLineCostPlusAdditionalLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 2);

  EXPECT_EQ(GoldMainLineCost + GoldAddiLineCost, bill);
}
