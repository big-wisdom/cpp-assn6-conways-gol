#include "PatternGlider.hpp" 
#include <iostream>

PatternGlider::PatternGlider(): pattern({
        {0,0,1},
        {1,0,1},
        {0,1,1}
}){}

std::uint8_t PatternGlider::getSizeX() const
{
    return 3;
}

std::uint8_t PatternGlider::getSizeY() const
{
    return 3;
}

bool PatternGlider::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
