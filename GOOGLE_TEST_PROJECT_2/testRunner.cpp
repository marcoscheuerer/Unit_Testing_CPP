#include <iostream>
#include <gtest/gtest.h>

#include "LibraryCode.hpp"

TEST(ToUpperTest, BasicTest)
{
    // Arrange
    char inputString[] = "Hello World";

    // Act
    toUpper(inputString);
    std::cout << "After toUpper: " << inputString << '\n';
    if (strcmp(inputString, "HELLO WORLD") == 0)
    {
        std::cout << "Equal strings\n";
    }
    else
    {
        std::cout << "Not equal strings\n";
    }

    // Assert
    //std::string str = inputString;
    std::string str(inputString);
    //ASSERT_STREQ("HELLO WORLD", inputString);
    ASSERT_EQ("HELLO WORLD", str);
}

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
