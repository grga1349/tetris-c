#ifndef WINDOW_H
#define WINDOW_H

#include "defines.h"
#include "state.h"

// Initialise Window.
int initWindow(SDL_Window *window, SDL_Renderer *renderer);
void render(SDL_Renderer *renderer);
void renderGrid();
void renderPiece();

#endif // WINDOW_H
