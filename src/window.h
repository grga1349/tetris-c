#ifndef WINDOW_H
#define WINDOW_H

#include "defines.h"
#include "state.h"

// Initialise Window.
int initWindow(SDL_Window **window, SDL_Renderer **renderer, TTF_Font **font);
void render(SDL_Renderer **renderer, State *state, TTF_Font **font);
void renderGrid(SDL_Renderer **renderer, State *state);
void renderPiece(SDL_Renderer **renderer, State *state);
void renderScore(SDL_Renderer **renderer, State *state, TTF_Font **font);

#endif // WINDOW_H
