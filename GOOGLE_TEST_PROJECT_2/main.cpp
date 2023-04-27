#include <iostream>
#include <gtest/gtest.h>

#include "LibraryCode.hpp"

int main(int argc, char *argv[])
{
    char text[] = "Hello World";
    toUpper(text);

    std::cout << text << std::endl;

    return 0;
}
