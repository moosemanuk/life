#include <raylib.h>
#include "constants.h"

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Game of Life - John Conway");
    SetTargetFPS(TARGET_FPS);

    while (!WindowShouldClose())
    {
        // Event Handling

        // Update State

        // Drawing
        BeginDrawing();
        ClearBackground(BACKGROUND_COLOUR);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}