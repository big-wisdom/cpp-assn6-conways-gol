#include "PatternBlock.hpp"

PatternBlock::PatternBlock():pattern({
        {0,1},
        {0,0}
}){}

std::uint8_t PatternBlock::getSizeX() const {return 2;}
std::uint8_t PatternBlock::getSizeY() const {return 2;}
bool PatternBlock::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
