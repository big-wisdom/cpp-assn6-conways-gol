//  RendererConsole.cpp
#include "RendererConsole.hpp"

void RendererConsole::render(const LifeSimulator& simulation)
{
    rlutil::cls();
    rlutil::hidecursor();
    // go through all living cells and use rlutil::setChar to draw them
    std::cout << simulation.getSizeX() << std::endl;
    rlutil::locate(simulation.getSizeX(), simulation.getSizeY());
    rlutil::setChar('R');

    rlutil::locate(1, 1);
    rlutil::setChar('l');

    rlutil::locate(1, simulation.getSizeY());
    rlutil::setChar('L');

    rlutil::locate(simulation.getSizeX(), 1);
    rlutil::setChar('r');
    // rlutil::showcursor() ???
    // maybe rlutil::resetColor(); // to reset color after rendering?
    std::cout << std::flush; // to ensure that everything sent
    // to the terminal is actually committed not stuck in a buffer somewhere
}

