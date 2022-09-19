#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(9);
    EXPECT_NEAR(test->evaluate(), 9, 0.001);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-2);
    EXPECT_EQ(test->evaluate(), -2);
}

#endif //__OP_TEST_HPP__
