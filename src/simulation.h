#pragma once
#include <raylib.h>
#include <vector>
#include <utility>
#include "grid.h"

enum state
{
    running, paused
};

class Simulation
{
private:
    Grid grid;
    Grid tempGrid;
    state simulationState;
public:
    Simulation();
    void Draw();
    void UpdateCells();
    void UpdateState(int row, int col);
    void HandleEvents();
    state GetSimulationState();
    void SetSimulationState(state gamestate);

};