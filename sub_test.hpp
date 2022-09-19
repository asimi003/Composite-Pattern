#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubEvaluateZero-Zero) {
        Op* zero = new Op(0);
        Sub* add = new Sub(zero,zero);
        EXPECT_EQ(Sub->evaluate(), 0);
}

TEST(SubTest, SubEval_Pos+Pos) {
        Op* a = new Op(3);
        Op* b = new Op(3);
        Sub* sub = new sub(a, b);
        EXPECT_EQ(sub->evaluate(), 0);
}

