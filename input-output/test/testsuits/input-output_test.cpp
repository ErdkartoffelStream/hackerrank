/**
 * @author      : worldpotato
 * @file        : input-output_test
 * @created     : Friday Jan 15, 2021 14:53:48 CET
 */

#include "gtest/gtest.h"
#include "myMath.hpp"

TEST(add3, add_three_number_success )
{

    myMath m;
    int expected = 6;
    int one = 1;
    int two = 2;
    int three = 3;

    int result = m.add3(one, two, three);

    ASSERT_EQ(expected, result);
}

TEST(add3, add_three_number_failure )
{

    myMath m;
    int notExpected = 7;
    int notExpected2 = 5;

    int one = 1;
    int two = 2;
    int three = 3;

    int result = m.add3(one, two, three);

    ASSERT_NE(notExpected, result);
    ASSERT_NE(notExpected2, result);
}

