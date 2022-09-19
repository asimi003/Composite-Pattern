#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "pow.hpp"

TEST(PowTest, PowEvaluateZero^Zero) {
        Op* zero = new Op(0);
        Pow* pow = new Pow(zero,zero);
        EXPECT_EQ(pow->evaluate(), 0);
}

TEST(PowTest, PowEval_Pos+Pos) {
        Op* a = new Op(3);
        Op* b = new Op(3);
        Pow* pow = new Pow(a, b);
        EXPECT_EQ(pow->evaluate(), 27);
}

