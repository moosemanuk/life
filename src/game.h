#pragma once
#include <raylib.h>
#include <vector>
#include <utility>
#include "grid.h"

class Game{
    private:
        Grid grid;
        Grid tempGrid;
    public:
        Game();
        void Draw();
        void UpdateCells();
        void UpdateState(int row, int col);

};