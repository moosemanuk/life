#include <raylib.h>
#include "constants.h"
#include "simulation.h"

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Game of Life - John Conway");
    SetTargetFPS(TARGET_FPS);

    Simulation *simulation = new Simulation;
    simulation->SetSimulationState(running);

    while (!WindowShouldClose())
    {
        simulation->HandleEvents();
        simulation->UpdateCells();
        BeginDrawing();
        ClearBackground(BACKGROUND_COLOUR);
        simulation->Draw();
        EndDrawing();
        
    }

    CloseWindow();
    return 0;
}