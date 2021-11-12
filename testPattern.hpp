#include "Pattern.hpp"
#include <vector>

class TestPattern:public Pattern
{
    public:
        TestPattern();
        std::uint8_t getSizeX() const override;
        std::uint8_t getSizeY() const override;
        bool getCell(std::uint8_t x, std::uint8_t y) const override;
    protected:
        std::vector<std::vector<bool>> pattern;
};
