#include <iostream>
#include <chrono>
#include <thread>
#include "RendererConsole.hpp"
#include "LifeSimulator.hpp"
#include "rlutil.h"
#include "Pattern.hpp"
#include "PatternGlider.hpp"
#include "testPattern.hpp"
#include "Acorn.hpp"
#include "Block.hpp"
#include "Blinker.hpp"
#include "PatternGosperGliderGun.hpp"

int main()
{
    // initialize LifeSimulator
    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    //PatternGlider glider;
    //TestPattern tp;
    //Acorn acorn;
    //Block block;
    //Blinker b;
    PatternGosperGliderGun gliderGun;
    ls.insertPattern(gliderGun, 10, 10);
    // initialize some renderer
    RendererConsole rc;
    // run render
    while(true)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}
