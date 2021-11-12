#include "PatternAcorn.hpp"

PatternAcorn::PatternAcorn():pattern({
        {0,1,0,0,0,0,0},
        {0,0,0,1,0,0,0},
        {1,1,0,0,1,1,1}
}){}

std::uint8_t PatternAcorn::getSizeX() const {return 7;}
std::uint8_t PatternAcorn::getSizeY() const {return 3;}
bool PatternAcorn::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
