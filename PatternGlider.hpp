#include <iostream>
#include <string>
#include "Pattern.hpp"
#include <vector>

class PatternGlider:public Pattern
{
    public:
        PatternGlider();
        std::uint8_t getSizeX() const override;
        std::uint8_t getSizeY() const override;
        bool getCell(std::uint8_t x, std::uint8_t y) const override;
    protected:
        std::vector<std::vector<bool>> pattern;
};
