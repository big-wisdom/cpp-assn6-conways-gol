#include "PatternBlinker.hpp"

PatternBlinker::PatternBlinker():pattern({
        {1},
        {1},
        {1}
}){}

std::uint8_t PatternBlinker::getSizeX() const {return 1;}
std::uint8_t PatternBlinker::getSizeY() const {return 3;}
bool PatternBlinker::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
