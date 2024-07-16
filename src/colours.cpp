#include "colours.h"
#include <vector>

const Color black = {0,0,0,255};
//const Color green = {47,230,23,255};

const Color green = {34,129,34,255};

std::vector<Color> GetCellColours()
{
    return {black, green};
}