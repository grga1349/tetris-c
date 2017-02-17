#include "defines.h"
#include "window.h"
#include "state.h"
#include "actions.h"

int main(int argc, char const *argv[]) {
  // Declare window variables on main function scope.
  SDL_Window *window = NULL;
  SDL_Renderer *renderer = NULL;
  TTF_Font *font = NULL;
  SDL_Event event;
  // Initialise Window.
  if (initWindow(&window, &renderer, &font) == 0) {
    // Set initial state.
    State state = initState();
    // Main loop.
    while (!state.quit) {
      // Run actions.
      doAllActions(&state, &event);
      // Render game.
      render(&renderer, &state, &font);
      // Set game to 60 FPS.
      SDL_Delay(16);
    }
  }
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
  TTF_Quit();
  return 0;
}
