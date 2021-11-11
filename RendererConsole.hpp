#pragma once
#include "Renderer.hpp"
#include "rlutil.h"

class RendererConsole:public Renderer
{
    public:
        void render(const LifeSimulator& simulation);
};
