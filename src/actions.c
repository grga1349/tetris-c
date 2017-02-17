#include "actions.h"

void doAllActions(State *state, SDL_Event *event) {
  while ( SDL_PollEvent(event) != 0) {
    switch (event -> type) {
      case SDL_QUIT:
        state -> quit = 1;
        break;
      case SDL_KEYDOWN:
        switch (event -> key.keysym.sym) {
          case SDLK_SPACE:
            if (!state -> gameOver) {
              rotateElement(state);
            }
            break;
          case SDLK_LEFT:
            if (!state -> gameOver) {
              move(-1, 0, state);
            }
            break;
          case SDLK_RIGHT:
            if (!state -> gameOver) {
              move(1, 0, state);
            }
            break;
          case SDLK_DOWN:
            if (!state -> gameOver) {
              setTurbo(1, state);
            }
            break;
          case SDLK_RETURN:
            if (state -> gameOver) {
              restartGame(state);
            }
            break;
          case SDLK_r:
            if (!state -> gameOver) {
              restartGame(state);
            }
            break;
          default:
            break;
        }
        break;
      default:
        break;
    }
  }
  if (!state -> gameOver) {
    if (state -> framesToMove == 0 || state -> turbo) {
      move(0, 1, state);
      state -> framesToMove = FRAMES_TO_MOVE;
    } else {
      state -> framesToMove --;
    }
    removeFull(state);
  }
}

void rotateElement(State *state) {
  int rotation = state -> piece.rotation;
  rotation ++;
  if (rotation > 3) {
    if (checkMax(0, 0, -3, state) && checkCollision(0, 0, -3, state)) {
      state -> piece.rotation = 0;
    }
  } else {
    if (checkMax(0, 0, 1, state) && checkCollision(0, 0, 1, state)) {
      state -> piece.rotation ++;
    }
  }
}

void move(int x, int y, State *state) {
  if (checkMax(x, y, 0, state) && checkCollision(x, y, 0, state)) {
    state -> piece.x += x;
    state -> piece.y += y;
  } else if (y == 1) {
    fillGrid(state);
    state -> piece.y = 0;
    state -> piece.x = 3;
    state -> piece.type = randomType();
    state -> piece.rotation = randomRotation();
    setTurbo(0, state);
  }
}

int checkMax(int x, int y, int r, State *state) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (
        state -> piece.type.blocks[(state -> piece.rotation + r)][i][j] == 1
        && (
          state -> piece.x + j + x > GRID_WIDTH - 1
          || state -> piece.x + j + x < 0
        )
      ) {
        return 0;
      } else if (
        state -> piece.type.blocks[state -> piece.rotation + r][i][j] == 1
        && (
          state -> piece.y + i + y > GRID_HEIGHT - 1
        )
      ) {
        return 0;
      }
    }
  }
  return 1;
}

int checkCollision(int x, int y, int r, State *state) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      int _x = state -> piece.x + x + j, _y = state -> piece.y + y + i;
      if (
        state -> piece.type.blocks[state -> piece.rotation + r][i][j] == 1
        && state -> grid[_y][_x].r != setEmpty().r
        && state -> grid[_y][_x].g != setEmpty().g
        && state -> grid[_y][_x].b != setEmpty().b
      ) {
        return 0;
      }
    }
  }
  return 1;
}

void fillGrid(State *state) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if(state -> piece.type.blocks[state -> piece.rotation][i][j] == 1) {
        int _x = state -> piece.x + j, _y = state -> piece.y + i;
        state -> grid[_y][_x] = state -> piece.type.color;
      }
    }
  }
}

Type randomType() {
  int randNumber = rand() % 7;
  switch (randNumber) {
    case 0:
      return setI();
      break;
    case 1:
      return setJ();
      break;
    case 2:
      return setL();
      break;
    case 3:
      return setO();
      break;
    case 4:
      return setS();
      break;
    case 5:
      return setT();
      break;
    case 6:
      return setZ();
      break;
    default:
      break;
  }
  return setI();
}

int randomRotation() {
  return rand() % 3;
}

void removeFull(State *state) {
  int toColapse;
  for (size_t i = 0; i < GRID_HEIGHT; i++) {
    toColapse = 1;
    for (size_t j = 0; j < GRID_WIDTH; j++) {
      if (
        state -> grid[i][j].r == setEmpty().r
        && state -> grid[i][j].g == setEmpty().g
        && state -> grid[i][j].b == setEmpty().b
      ) {
        toColapse = 0;
      } else if (i < 5) {
        state -> gameOver = 1;
      }
    }
    if (toColapse) {
      state -> score += 10;
      for (size_t j = i; j > 0; j--) {
        for (size_t k = 0; k < GRID_WIDTH; k++) {
          state -> grid[j][k] = state -> grid[j - 1][k];
        }
      }
    }
  }
}

void setTurbo(int turbo, State *state) {
  state -> turbo = turbo;
}

void restartGame(State *state) {
  *state = initState();
}
