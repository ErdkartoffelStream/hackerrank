/**
 * @author      : worldpotato
 * @file        : basic-datatypes_test
 * @created     : Saturday Jan 16, 2021 14:05:07 CET
 */

#include "gtest/gtest.h"
#include <iostream>

TEST(basicDatatypes, read_all_correct)
{
    testing::internal::CaptureStdout();

    // run main function
    char file[60] = "echo '3 12345678912345 a 334.23 14049.30493' | ./main";
    system(file);

    // capture the first line in standard out
    std::string output = testing::internal::GetCapturedStdout();

    std::stringstream ss(output);
    std::string to;
    std::string outputs[5];

    int i = 0;
      while(std::getline(ss,to,'\n')){
          outputs[i] = to;
          i++;
      }

    ASSERT_EQ("3", outputs[0]);
    ASSERT_EQ("12345678912345", outputs[1]);

    ASSERT_EQ("a", outputs[2]);

    ASSERT_EQ("334.230", outputs[3]);

    ASSERT_EQ("14049.304930000", outputs[4]);



}

