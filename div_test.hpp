#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluatePosDZero) {
    Op* a = new Op(6);
    Op* b = new Op(0);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->evaluate(), 0);
}

TEST(DivTest, DivStringifyPosDZero) {
    Op* a = new Op(6);
    Op* b = new Op(0);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->stringify(), "6.000000 / 0.000000" );
}

TEST(DivTest, DivEvaluatePosDNeg) {
    Op* a = new Op(9);
    Op* b = new Op(-3);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->evaluate(), -3);
}

TEST(DivTest, DivStringifyPosDNeg) {
    Op* a = new Op(9);
    Op* b = new Op(-3);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->stringify(), "9.000000 / -3.000000" );
}


TEST(DivTest, DivEvaluatePosDPos) {
    Op* a = new Op(1);
    Op* b = new Op(2);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->evaluate(), .5);
}

TEST(DivTest, DivStringifyPosDPos) {
    Op* a = new Op(1);
    Op* b = new Op(2);
    Div* div = new Div(a, b);
    EXPECT_EQ(div->stringify(), "1.000000 / 2.000000" );
}

#endif
