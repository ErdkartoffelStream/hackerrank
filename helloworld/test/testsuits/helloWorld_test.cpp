/**
 * @author      : worldpotato
 * @file        : helloWorld_test
 * @created     : Friday Jan 15, 2021 14:21:38 CET
 */
#include "gtest/gtest.h"
#include <iostream>



TEST(example_success, success)
{
    // capture the first line in standard out
    std::string output = testing::internal::GetCapturedStdout();

    // run main function
    char file[15] = "./main";
    system(file);

    // Compare with expected output
    std::string expected = "Hello, World!";
    ASSERT_EQ(expected, output);
}
