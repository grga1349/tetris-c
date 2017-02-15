#ifndef STATE_H
#define STATE_H

#include "defines.h"
#include "type.h"

// Define State struct.
typedef struct {
  int gameOver;
  int quit;
  Piece piece;
  Color grid[GRID_HEIGHT][GRID_WIDTH];
} State;
// Define piece struct.
typedef struct {
 int x;
 int y;
 Type type;
 int rotation;
} Piece;
// Function for setting initial game state.
State initState();
#endif // STATE_H
