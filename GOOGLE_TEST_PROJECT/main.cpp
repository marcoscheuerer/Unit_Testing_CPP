#include <iostream>
#include "LibraryCode.hpp"


int main(int argc, char **argv)
{
    std::vector<std::int32_t> inputVector{1, -2, 3, -4, 5, -6, -7};

    std::cout << countPositives(inputVector) << std::endl;

    return 0;
}
