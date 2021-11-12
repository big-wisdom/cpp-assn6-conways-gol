#include "Pattern.hpp"
#include <vector>

class PatternAcorn:public Pattern
{
  public:
    PatternAcorn();
    std::uint8_t getSizeX() const;
    std::uint8_t getSizeY() const;
    bool getCell(std::uint8_t x, std::uint8_t y) const;
  protected:
    std::vector<std::vector<bool>> pattern;
};
