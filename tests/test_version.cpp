#include <gtest/gtest.h>
#include "../lib.h"
TEST(test_version, test_valid_version)
{
    EXPECT_GT(version(), 0);
    EXPECT_EQ(1, 1);
    EXPECT_GT(2, 0);
}