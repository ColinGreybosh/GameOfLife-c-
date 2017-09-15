#include <SDL.h>

#include "../include/Game.h"

int main(int argc, char* args[])
{
    // Configuration Settings //
    const int WORLD_WIDTH   = 720;
    const int WORLD_HEIGHT  = 360;
    const int PREFERRED_FPS = 60;
    const double WINDOW_SCALE = 2.0; // Window size as a percentage of the world size. Ex: 50x50 world with 2.0 scale = 100x100 window
    const double IS_ALIVE_CHANCE = 0.5; // Percentage chance that a specific cell will be alive at world generation if RANDOM is the arg in CellVector.generateseed()  
    const char* GAME_TITLE = "Conway's Game of Life";

    Game game(WORLD_WIDTH, WORLD_HEIGHT, WINDOW_SCALE, GAME_TITLE);
    game.generateSeed(IS_ALIVE_CHANCE);

    bool running = true;
    while (running)
    {
        running = !game.wasEventTriggered(SDL_QUIT);
        game.render();
        game.tick();
        game.delay(static_cast<Uint32>(16));
    }

    return 0;
}