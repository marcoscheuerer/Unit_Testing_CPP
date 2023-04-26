#include "LibraryCode.hpp"

#include <algorithm>
#include <cstdlib>
#include <vector>

bool isPositive(int x)
{
    return x >= 0;
}

int countPositives(std::vector<int32_t> const &inputVector)
{
    return std::count_if(inputVector.begin(), inputVector.end(), isPositive);
}
