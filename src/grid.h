#pragma once
#include <raylib.h>
#include "constants.h"

class Grid{
    private:
        int grid[GRID_ROWS][GRID_COLS];

    public:
        Grid();
        void InitialiseGrid();
    
};