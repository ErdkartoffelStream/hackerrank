/**
 * @author      : worldpotato
 * @file        : conditions_test
 * @created     : Saturday Jan 16, 2021 15:34:37 CET
 */
#include "gtest/gtest.h"

TEST(conditions, one)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '1' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("one\n", output);
}

TEST(conditions, two)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '2' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("two\n", output);
}

TEST(conditions, three)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '3' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("three\n", output);
}

TEST(conditions, four)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '4' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("four\n", output);
}

TEST(conditions, five)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '5' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("five\n", output);
}

TEST(conditions, six)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '6' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("six\n", output);
}

TEST(conditions, seven)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '7' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("seven\n", output);
}

TEST(conditions, eight)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '8' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("eight\n", output);
}

TEST(conditions, nine)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '9' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("nine\n", output);
}

TEST(conditions, greater_than_nine)
{
    testing::internal::CaptureStdout();

    char file[30] = "echo '10' | ./conditions";
    system(file);

    std::string output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("Greater than 9\n", output);

    char file2[50] = "echo '1000000000' | ./conditions";
    system(file2);

    output = testing::internal::GetCapturedStdout();

    ASSERT_EQ("Greater than 9\n", output);
}

