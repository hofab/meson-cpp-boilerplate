#include<gtest/gtest.h>

#include "classA.h"

TEST(basic_test, eq_works) {
    ASSERT_EQ(0, 1-1) << "Equality is broken. Mass panic!";
}

TEST(basic_test, neq_works) {
    ASSERT_NE(15, 105) << "Inequal is equal. The foundations of space and time are in jeopardy.";
}

TEST(basic_test, class_test) {
    std::unique_ptr<classA> test_class = std::make_unique<classA>();
    // std::unique_ptr<classA> test_class(new classA());
    EXPECT_TRUE(test_class->returnTrue());
    EXPECT_FALSE(test_class->returnFalse());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

