/**
 * @author      : worldpotato
 * @file        : sets-stl_tests
 * @created     : Tuesday Jan 19, 2021 13:36:52 CET
 */

#include "gtest/gtest.h"
#include "set-operations.hpp"



TEST(setOperations, add)
{
    std::set<int> set;
    int value = 0;

    set = setOps::add(set, value);
    ASSERT_EQ(1,set.size());
    ASSERT_EQ(value,*set.begin());

    set = setOps::add(set, value+1);
    ASSERT_EQ(2,set.size());
    ASSERT_EQ(value+1,*(++set.begin()));
}

TEST(setOperations, remove)
{

    std::set<int> set;
    int value = 0;
    set.insert(value);
    set.insert(value+1);
    set.insert(value+2);

    set = setOps::remove(set, value+1);

    ASSERT_EQ(2, set.size());
    ASSERT_EQ(value, *set.begin());
    ASSERT_EQ(value+2, *set.end());
}

TEST(setOperations, lookup)
{

    std::set<int> set;
    int value = 0;
    set.insert(value);
    set.insert(value+1);
    set.insert(value+2);

    EXPECT_TRUE(setOps::lookup(set, value));
    EXPECT_TRUE(setOps::lookup(set, value+1));
    EXPECT_TRUE(setOps::lookup(set, value+2));

    EXPECT_FALSE(setOps::lookup(set, value-1));
    EXPECT_FALSE(setOps::lookup(set, value+3));

}


