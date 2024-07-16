#pragma once
#include <raylib.h>
#include "grid.h"

class Game{
    private:
        Grid grid;
    public:
        Game();
        void Draw();

};