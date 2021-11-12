#include "GosperGliderGun.hpp"

GosperGliderGun::GosperGliderGun():pattern({
        {0,1,0,0,0,0,0},
        {0,0,0,1,0,0,0},
        {1,1,0,0,1,1,1}
}){}

std::uint8_t GosperGliderGun::getSizeX() const {return 7;}
std::uint8_t GosperGliderGun::getSizeY() const {return 3;}
bool GosperGliderGun::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
