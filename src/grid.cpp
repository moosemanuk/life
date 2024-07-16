#include "grid.h"

Grid::Grid()
{
    // constructor
}

void Grid::InitialiseGrid()
{
    for(int rows = 0; rows < GRID_ROWS; rows++){
        for (int cols = 0; cols < GRID_COLS; cols++){
            grid[rows][cols] = 0;
        }
    }
}