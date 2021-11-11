//  RendererConsole.cpp
#include "RendererConsole.hpp"

void RendererConsole::render(const LifeSimulator& simulation)
{
    rlutil::cls();
    rlutil::hidecursor();
    // go through all living cells and use rlutil::setChar to draw them
    auto height = simulation.getSizeY();
    auto width = simulation.getSizeX();
    for(decltype(height) y=1; y<height; y++)
    {
        for(decltype(width) x=1; x<width; x++)
        {
            rlutil::locate(x, y);
            if(!simulation.getCell(x, y))
                rlutil::setChar('x');
        }
    }
    // rlutil::showcursor() ???
    // maybe rlutil::resetColor(); // to reset color after rendering?
    std::cout << std::flush; // to ensure that everything sent
    // to the terminal is actually committed not stuck in a buffer somewhere
}

