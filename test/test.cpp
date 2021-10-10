//
// Created by John Dumais on 10/9/21.
//

#include <iostream>
#include "lib.h"
#include "gtest/gtest.h"

namespace {
    // To use a test fixture, derive a class from testing::Test.
    class ExampleTest : public testing::Test {

    };

    TEST_F(ExampleTest, yo) {
        // You can access data in the test fixture here.
        EXPECT_EQ(85, yo());
    }
}
