#include "Acorn.hpp"

Acorn::Acorn():pattern({
        {0,1,0,0,0,0,0},
        {0,0,0,1,0,0,0},
        {1,1,0,0,1,1,1}
}){}

std::uint8_t Acorn::getSizeX() const {return 7;}
std::uint8_t Acorn::getSizeY() const {return 3;}
bool Acorn::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
