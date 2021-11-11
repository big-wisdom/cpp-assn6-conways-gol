#include <iostream>
#include <chrono>
#include <thread>
#include "RendererConsole.hpp"
#include "LifeSimulator.hpp"
#include "rlutil.h"
#include "Pattern.hpp"
#include "PatternGl.hpp"

int main()
{
    // initialize LifeSimulator
    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    PatternGl* pg = new PatternGl("Hello from PatternGlider");
    //ls.insertPattern(glider, 5, 5);
    // initialize some renderer
    RendererConsole rc;
    // run render
   // while(true)
   // {
   //     rc.render(ls);
   //     std::this_thread::sleep_for(std::chrono::milliseconds(500));
   // }
   // return 0;
}
