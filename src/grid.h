#pragma once
#include <raylib.h>
#include <vector>
#include "constants.h"
#include "colours.h"

class Grid
{
private:
    int grid[GRID_ROWS][GRID_COLS];
    std::vector<Color> colours;

public:
    Grid();
    void InitialiseGrid();
    void Draw();
    int GetValue(int row, int col);
    void SetValue(int row, int col, int value);
};