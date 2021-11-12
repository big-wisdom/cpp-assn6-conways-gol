#include "Block.hpp"

Block::Block():pattern({
        {1,1},
        {1,1}
}){}

std::uint8_t Block::getSizeX() const {return 2;}
std::uint8_t Block::getSizeY() const {return 2;}
bool Block::getCell(std::uint8_t x, std::uint8_t y) const
{
    return pattern[y][x];
}
