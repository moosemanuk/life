#pragma once
#include <raylib.h>
#include <vector>
#include <utility>
#include "grid.h"

enum state{
    running, paused
};

class Game{
    private:
        Grid grid;
        Grid tempGrid;
        state gamestate;
    public:
        Game();
        void Draw();
        void UpdateCells();
        void UpdateState(int row, int col);
        void HandleEvents();
        state GetGameState();
        void SetGameState(state gamestate);

};