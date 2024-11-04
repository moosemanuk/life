#include "simulation.h"

Simulation::Simulation()
{

}

void Simulation::Draw()
{
   grid.Draw();
}

void Simulation::UpdateCells()
{
    if(simulationState == running){
        for(int row = 0 ; row < GRID_ROWS ; row++){
            for(int col = 0 ; col < GRID_COLS ; col++){
                UpdateState(row, col);
            }
        }
        grid = tempGrid;
    }
}

void Simulation::UpdateState(int row, int col)
{
    int liveNeighbourCount = 0;
    std::vector<std::pair<int, int>> offsets = 
    {
       {0, -1}, {0, 1},
       {-1, 0}, {1, 0},
       {-1,-1}, {-1, 1}, {1,-1}, {1, 1}
    };

    for(const auto& offset : offsets){
        int neighbourRow = row + offset.first;
        int neighbourCol = col + offset.second;
        if(grid.GetValue(neighbourRow, neighbourCol) == 1){
            liveNeighbourCount++;
        }
    }
    if(grid.GetValue(row, col) == 1){
        if(liveNeighbourCount != 2 && liveNeighbourCount != 3){
            tempGrid.SetValue(row, col, 0);
        }    
    }
    else{
        if(liveNeighbourCount == 3){
            tempGrid.SetValue(row, col, 1);
        }        
    }       
}

void Simulation::HandleEvents()
{
    if(IsKeyPressed(KEY_SPACE) || IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
        if(simulationState == running){
            simulationState = paused;
        }
        else{
            simulationState = running;
        }
    }
}

state Simulation::GetSimulationState()
{
    return simulationState;
}

void Simulation::SetSimulationState(state gamestate)
{
    this->simulationState = gamestate;
}
