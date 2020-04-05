#include "gtest/gtest.h"

#include "hello.h"

TEST(TestHello, HelloMethod) {
    std::string empty_name;
    
    EXPECT_EQ(false, Hello(empty_name));

    std::string name("likewind1993"); 

    EXPECT_EQ(true, Hello(name));
}
