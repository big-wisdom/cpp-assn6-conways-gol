#include <iostream>
#include <chrono>
#include <thread>
#include "RendererConsole.hpp"
#include "LifeSimulator.hpp"
#include "rlutil.h"
#include "Pattern.hpp"
#include "PatternGlider.hpp"
#include "testPattern.hpp"
#include "PatternAcorn.hpp"
#include "PatternBlock.hpp"
#include "PatternBlinker.hpp"
#include "PatternGosperGliderGun.hpp"

void demonstrateGliderGun(){
    RendererConsole rc;
    PatternGosperGliderGun gliderGun;

    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<100; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateBlock(){
    RendererConsole rc;
    PatternBlock gliderGun;

    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<20; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateAcorn(){
    RendererConsole rc;
    PatternAcorn gliderGun;

    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<100; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateBlinker(){
    RendererConsole rc;
    PatternBlinker gliderGun;

    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<20; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateGlider(){
    RendererConsole rc;
    PatternGlider gliderGun;

    LifeSimulator ls(rlutil::tcols(), rlutil::trows());
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<50; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main()
{
    demonstrateGliderGun();
    demonstrateAcorn();
    demonstrateBlinker();
    demonstrateBlock();
    demonstrateGlider();
    return 0;
}
