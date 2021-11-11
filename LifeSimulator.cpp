// initialize the LifeSimulator to the size of the window
// 
#include <iostream>
#include "LifeSimulator.hpp"

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY)
{
    width = sizeX;
    height = sizeY;

    for(decltype(height) r=0; r < height; r++)
    {
        std::vector<bool> row;
        for(decltype(width) c=0; c < width; c++)
        {
            row.push_back(false);
        } 
        world.push_back(row);
    }
}

bool LifeSimulator::getCell(std::uint8_t x, std::uint8_t y) const
{
    return world[y][x];
}

std::uint8_t LifeSimulator::getSizeX() const
{
    return width;
}

std::uint8_t LifeSimulator::getSizeY() const
{
    return height;
}
