#include <gtest/gtest.h>

TEST(FooTest, MethodBarDoesAbc) {
  EXPECT_EQ(1 + 2, 3);
}

TEST(FooTest, DoesXyz) {
    EXPECT_EQ(1 + 1, 3);
}

// Nếu bạn không viết hàm main, thì nó sẽ được tự động sinh ra
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}