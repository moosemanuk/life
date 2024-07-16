#include "grid.h"

Grid::Grid()
{
    colours = GetCellColours();
    InitialiseGrid();

    //testing!
    grid[25][30] = 1;
}

void Grid::InitialiseGrid()
{
    /*for(int row = 0; row < GRID_ROWS; row++){
        for (int col = 0; col < GRID_COLS; col++){
            grid[row][col] = 0;
        }
    }*/

    // random population
    for(int row = 0; row < GRID_ROWS; row++){
        for (int col = 0; col < GRID_COLS; col++){
            if(GetRandomValue(1, RANDOM_SEED) == 1){
                grid[row][col] = 1;
            }
            else{
                grid[row][col] = 0;
            }
            
        }
    }
}

void Grid::Draw()
{
    for(int row = 0; row < GRID_ROWS; row++){
        for(int col = 0; col < GRID_COLS; col++){
            int cellValue = grid[row][col];
            DrawRectangle(row * CELL_SIZE, col * CELL_SIZE, CELL_SIZE - 1, CELL_SIZE - 1, colours[cellValue]);
        }
    }
}
