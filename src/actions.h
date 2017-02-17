#ifndef ACTIONS_H
#define ACTIONS_H

#include "defines.h"
#include "state.h"
#include "type.h"

void doAllActions(State *state, SDL_Event *event);
void rotateElement( State *state);
void move(int x, int y, State *state);
int checkMax(int x, int y, int r, State *state);
int checkCollision(int x, int y, int r, State *state);
void fillGrid(State *state);
Type randomType();
int randomRotation();
void removeFull(State *state);
void setTurbo(int turbo, State *state);
void restartGame(State *state);
#endif // ACTIONS_H
