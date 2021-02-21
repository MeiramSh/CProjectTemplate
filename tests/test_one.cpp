#include <gtest/gtest.h>

extern "C" {
#include "../libraries/function.h"
}
TEST(test_one, FIRST_TEST) { EXPECT_FALSE(0); }