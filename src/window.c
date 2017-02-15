#include "window.h"

int initWindow(SDL_Window *window, SDL_Renderer *renderer) {
  // Initialise SDL.
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    printf("Init failed with: %s\n", SDL_GetError());
    return 1;
  }
  // Initialise Window.
  if ((window = SDL_CreateWindow(
    WINDOW_NAME,
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    WINDOW_LENGTH,
    WINDOW_HEIGHT,
    SDL_WINDOW_SHOWN
  )) == NULL) {
    printf("Window creation failed with: %s\n", SDL_GetError());
    return 1;
  }
  // Initialise Renderer.
  if ((renderer = SDL_CreateRenderer(
    window,
    -1,
    SDL_RENDERER_ACCELERATED
  )) == NULL) {
    printf("Renderer creation failed with: %s\n", SDL_GetError());
    return 1;
  }
  // If all works return 0.
  return 0;
}

void render(SDL_Renderer *renderer) {
  SDL_RenderClear(renderer);
  renderGrid(renderer);
  renderPiece(renderer);
  SDL_RenderPresent(renderer);
}
