/**
 * @author      : worldpotato
 * @file        : sets-stl_tests
 * @created     : Tuesday Jan 19, 2021 13:36:52 CET
 */

#include "gtest/gtest.h"
#include "set-operations.hpp"



TEST(setsSTL, first)
{
    testing::internal::CaptureStdout();

    // run main function
    char command[150] = "echo '8\n1 9\n1 6\n1 10\n1 4\n3 6\n3 14\n2 6\n3 6\n' | ./sets-stl";
    system(command);

    // capture the first line in standard out
    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("Yes\nNo\nNo\n",output);
}


