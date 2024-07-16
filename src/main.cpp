#include <raylib.h>
#include "constants.h"
#include "game.h"

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Game of Life - John Conway");
    SetTargetFPS(TARGET_FPS);

    Game game;

    while (!WindowShouldClose())
    {
        // Event Handling
        
        // Update State
        game.UpdateCells();
        // Drawing
        BeginDrawing();
        ClearBackground(BACKGROUND_COLOUR);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}