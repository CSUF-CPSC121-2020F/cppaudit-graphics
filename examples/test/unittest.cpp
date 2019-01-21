#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <random>
#include <cmath>
#include "gtest_ext.h"
#include "../algebra.hpp"

TEST(CashBack, OutputFormat)
{
  ASSERT_DURATION_LE(3, {
    ASSERT_EXECIO_EQ("restaurant", "", "Restaurant: 27\n");
  });
}

TEST(CashBack, FuncTest)
{
      ASSERT_EQ(cube(3), 27);
}

int main(int argc, char **argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
