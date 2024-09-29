#include <gtest/gtest.h>

#include "my_add.hpp"

TEST(ADD, first){
    EXPECT_EQ(my_add(5, 5), 10);
    EXPECT_EQ(my_add(7, 5), 12);
    EXPECT_EQ(my_add(7, 5), my_add(5, 7));
    EXPECT_EQ(my_add(0, -52), -52);
}