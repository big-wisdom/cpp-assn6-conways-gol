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

void LifeSimulator::insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY)
{
    auto p_width = pattern.getSizeX();
    auto p_height = pattern.getSizeY();
    for(decltype(p_height) y=0; y<p_height; y++)
    {
        for(decltype(p_width) x=0; x<p_width; x++)
        {
            // I STILL NEED TO ACCOUNT FOR WORLD EDGES
            world[y+startY][x+startX] = pattern.getCell(x, y);
        }
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
