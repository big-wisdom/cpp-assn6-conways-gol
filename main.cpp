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

void demonstrateGliderGun(std::uint8_t cols, std::uint8_t rows){
    RendererConsole rc;
    PatternGosperGliderGun gliderGun;

    LifeSimulator ls(cols, rows);
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<100; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateBlock(std::uint8_t cols, std::uint8_t rows){
    RendererConsole rc;
    PatternBlock gliderGun;

    LifeSimulator ls(cols, rows);
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<20; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateAcorn(std::uint8_t cols, std::uint8_t rows){
    RendererConsole rc;
    PatternAcorn gliderGun;

    LifeSimulator ls(cols, rows);
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<100; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateBlinker(std::uint8_t cols, std::uint8_t rows){
    RendererConsole rc;
    PatternBlinker gliderGun;

    LifeSimulator ls(cols, rows);
    ls.insertPattern(gliderGun, 10, 10);
    for(int i=0; i<20; i++)
    {
        rc.render(ls);
        ls.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void demonstrateGlider(std::uint8_t cols, std::uint8_t rows){
    RendererConsole rc;
    PatternGlider gliderGun;

    LifeSimulator ls(cols, rows);
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
    std::uint8_t cols = static_cast<std::uint8_t>(rlutil::tcols());
    std::uint8_t rows = static_cast<std::uint8_t>(rlutil::trows());
    demonstrateGliderGun(cols, rows);
    demonstrateAcorn(cols, rows);
    demonstrateBlinker(cols, rows);
    demonstrateBlock(cols, rows);
    demonstrateGlider(cols, rows);
    return 0;
}
