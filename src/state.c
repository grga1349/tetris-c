#include "state.h"

State initState() {
  State temp;
  // Game stats
  temp.gameOver = 0;
  temp.quit = 0;
  temp.score = 0;
  temp.turbo = 0;
  temp.framesToMove = FRAMES_TO_MOVE;
  // Piece
  temp.piece = setPiece();
  // Grid
  for (size_t i = 0; i < GRID_HEIGHT; i++) {
    for (size_t j = 0; j < GRID_WIDTH; j++) {
      temp.grid[i][j] = setEmpty();
    }
  }
  return temp;
}

Piece setPiece() {
  Piece temp;
  temp.x = 3;
  temp.y = 0;
  temp.rotation = 0;
  temp.type = setI();
  return temp;
}
