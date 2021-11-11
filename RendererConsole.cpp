//  RendererConsole.cpp
#include "RendererConsole.hpp"

void RendererConsole::render(const LifeSimulator& simulation)
{
    rlutil::cls();
    rlutil::hidecursor();
    // go through all living cells and use rlutil::setChar to draw them
    rlutil::locate(3, 3);
    rlutil::setChar('E');
    // rlutil::showcursor() ???
    // maybe rlutil::resetColor(); // to reset color after rendering?
    std::cout << std::flush; // to ensure that everything sent
    // to the terminal is actually committed not stuck in a buffer somewhere
}

