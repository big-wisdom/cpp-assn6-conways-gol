#include "Blinker.hpp"

Blinker::Blinker():pattern({
        {1},
        {1},
        {1}
}){}

std::uint8_t Blinker::getSizeX() const {return 1;}
std::uint8_t Blinker::getSizeY() const {return 3;}
bool Blinker::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
