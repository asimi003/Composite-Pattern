#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"
#include <string> 

TEST(RandTest, RandomEvaluate) {
	srand(523);
	Rand* rand = new Rand();
	EXPECT_EQ(rand->evaluate(), 55);
}

TEST(RandTest, RandStringEval) {
        srand(523);
        Rand* rand = new Rand();
        EXPECT_EQ(rand->stringify(), "55.000000");
}


#endif

