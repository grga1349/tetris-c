#include "defines.h"
#include "window.h"
#include "state.h"

int main(int argc, char const *argv[]) {
  // Declare window variables on main function scope.
  SDL_Window *window = NULL;
  SDL_Renderer *renderer = NULL;
  // Initialise Window.
  if (initWindow(window, renderer) == 0) {
    // Set initial state.
    State state = initState();
    // Main loop.
    while (!stete.quit) {
      // Get input.
    //  setActions();
      // Game logic.
    //  game();
      // Render game.
    //  render(renderer);
      // Set game to 60 FPS.
      SDL_Delay(16);
    }
  }
  return 0;
}
