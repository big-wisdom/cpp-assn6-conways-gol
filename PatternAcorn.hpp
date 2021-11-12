#include "Pattern.hpp"
#include <vector>

class Acorn:public Pattern
{
  public:
    Acorn();
    std::uint8_t getSizeX() const;
    std::uint8_t getSizeY() const;
    bool getCell(std::uint8_t x, std::uint8_t y) const;
  protected:
    std::vector<std::vector<bool>> pattern;
};
