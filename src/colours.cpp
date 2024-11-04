#include "colours.h"
#include <vector>

const Color CELL_COLOUR = { 0x0D, 0x27, 0x14, 0x255 };
const Color ACTIVE_COLOUR = { 0xD9, 0xE4, 0xE0, 0xFF };

std::vector<Color> GetCellColours()
{
    return { CELL_COLOUR, ACTIVE_COLOUR };
}