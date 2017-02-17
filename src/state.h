#ifndef STATE_H
#define STATE_H

#include "defines.h"
#include "type.h"

// Define piece struct.
typedef struct {
  int x;
  int y;
  Type type;
  int rotation;
} Piece;
// Define State struct.
typedef struct {
  int gameOver;
  int quit;
  int score;
  int turbo;
  int framesToMove;
  Piece piece;
  Color grid[GRID_HEIGHT][GRID_WIDTH];
} State;
// Function for setting initial game state.
State initState();

// Set initial Piece
Piece setPiece();
#endif // STATE_H
