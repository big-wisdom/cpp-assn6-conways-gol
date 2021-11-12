#include <iostream>
#include "testPattern.hpp"

TestPattern::TestPattern(): pattern({
        {0,1,0},
        {0,1,0},
        {0,1,0}
}){}

std::uint8_t TestPattern::getSizeX() const
{
    return 3;
}

std::uint8_t TestPattern::getSizeY() const
{
    return 3;
}

bool TestPattern::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
