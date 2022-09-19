#ifndef __MULT_TEST_HPP__
#define	__MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluateZeroXZero) {
	Op* zero = new Op(0);
	Mult* mult = new Mult(zero,zero);
	EXPECT_EQ(mult->evaluate(), 0);
}

TEST(MultTest, MultEval_PosXPos) {
        Op* a = new Op(3);
	Op* b = new Op(3);
        Mult* mult = new Mult(a, b);
        EXPECT_EQ(mult->evaluate(), 9);
}

TEST(MultTest, MultEvaluateNegative) {
        Op* a = new Op(-5);
	Op* b = new Op(-9);
        Mult* mult = new Mult(a,b);
        EXPECT_EQ(mult->evaluate(), 45);
}
TEST(MultTest, MultStringifyZeroMZero) {
	Op* zero = new Op(0);
	Mult* mult = new Mult(zero, zero);
	EXPECT_EQ(mult->stringify(), "0.000000 * 0.000000");
}

TEST(MultTest, MultStringify_DoubleXDouble) {
        Op* DoubleMult = new Op(3.3);
        Mult* mult = new Mult(DoubleMult, DoubleMult);
        EXPECT_EQ(mult->stringify(), "3.300000 * 3.300000");
}


TEST(MultTest, MultStringifyNegative) {
        Op* a = new Op(-5);
        Op* b = new Op(-9);
        Mult* mult = new Mult(a,b);
        EXPECT_EQ(mult->stringify(), "-5.000000 * -9.000000");
}

#endif
