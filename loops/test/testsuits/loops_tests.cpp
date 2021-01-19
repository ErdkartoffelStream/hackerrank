/**
 * @author      : worldpotato
 * @file        : example_failure
 * @created     : Thursday Jan 14, 2021 23:13:03 CET
 */


#include "gtest/gtest.h"

TEST(loops, sucess)
{

    testing::internal::CaptureStdout();

    char file[30] = "echo '8\n11' | ./loops";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("eight\nnine\neven\nodd\n", output);
}

