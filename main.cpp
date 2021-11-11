#include <iostream>
#include <chrono>
#include <thread>
#include "RendererConsole.hpp"
#include "LifeSimulator.hpp"
#include "rlutil.h"
#include "Pattern.hpp"
#include "PatternGlider.hpp"

int main()
{
    // initialize LifeSimulator
    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    PatternGlider glider;
    ls.insertPattern(glider, 5, 5);
    // initialize some renderer
    RendererConsole rc;
    // run render
    while(true)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
    return 0;
}
