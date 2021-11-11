// initialize the LifeSimulator to the size of the window
// 
#include <iostream>
#include "LifeSimulator.hpp"
#include <algorithm>

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

std::uint8_t getNumberNeighbors(std::uint8_t x, std::uint8_t y, std::vector<std::vector<bool>> &world, std::uint8_t width, std::uint8_t height)
{
    // account for boundaries
    std::uint8_t total = 0;
    std::uint8_t left = 0 ? x == 0 : x-1;
    std::uint8_t right = std::min<std::uint8_t>(width, x);
    std::uint8_t top = 0 ? y == 0 : y-1;
    std::uint8_t bottom = std::min<std::uint8_t>(height, y);
    //std::cout << "height: " << static_cast<int>(height) << std::endl;
    //std::cout << static_cast<int>(x) << "," << static_cast<int>(y) << std::endl;
    //std::cout << "x: " << static_cast<int>(left) << "-" << static_cast<int>(right) << std::endl;
    //std::cout << "y: " << static_cast<int>(top) << "-" << static_cast<int>(bottom) << std::endl << std::endl;

    for(std::uint8_t rx = left; rx <= right; rx++)
    {
        for(std::uint8_t ry = top; ry <= bottom; ry++)
        {
            if(ry!=y && rx!=x && world[ry][rx]) total++;
        }
    }
    return total;
}

void LifeSimulator::update()
{
    std::vector<std::pair<std::uint8_t, std::uint8_t>> changeList;
    for(decltype(height) y=0; y<height; y++) 
    {
        for(decltype(width) x=0; x<width; x++) 
        {
            std::int8_t neighbors = getNumberNeighbors(x, y, world, width, height);
            if(world[y][x]) // if living
            {
                if(neighbors < 2 || neighbors > 3) // if under or over populated
                {
                    changeList.push_back(std::make_pair(x,y));
                }
            }
            else // if dead
            {
                changeList.push_back(std::make_pair(x,y));
            }
        }
    }

    for(std::pair<std::uint8_t, std::uint8_t> coord : changeList)
    {
        world[coord.second][coord.first] = !world[coord.second][coord.first];
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
