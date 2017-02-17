#include "window.h"

int initWindow(SDL_Window **window, SDL_Renderer **renderer, TTF_Font **font) {
  // Initialise SDL.
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    printf("SDL init failed with: %s\n", SDL_GetError());
    return 1;
  }
  // Initialise TTF
  if (TTF_Init() != 0) {
    printf("TTF init failed with: %s\n", SDL_GetError());
    return 1;
  }
  // Initialise Window.
  if ((*window = SDL_CreateWindow(
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
  if ((*renderer = SDL_CreateRenderer(
    *window,
    -1,
    SDL_RENDERER_ACCELERATED
  )) == NULL) {
    printf("Renderer creation failed with: %s\n", SDL_GetError());
    return 1;
  }
  if ((*font = TTF_OpenFont("fonts/Ubuntu-M.ttf", 24)) == NULL) {
    printf("Font creation failed with: %s\n", SDL_GetError());
    return 1;
  }

  // If all works return 0.
  return 0;
}

void render(SDL_Renderer **renderer, State *state, TTF_Font **font) {
  SDL_SetRenderDrawColor(
    *renderer,
    90,
    90,
    90,
    255
  );
  SDL_RenderClear(*renderer);
  renderGrid(renderer, state);
  renderPiece(renderer, state);
  renderScore(renderer, state, font);
  if (state -> gameOver) {
    renderGameOver(renderer, state, font);
  }
  SDL_RenderPresent(*renderer);
}

void renderGrid(SDL_Renderer **renderer, State *state) {
  for (size_t i = 0; i < GRID_HEIGHT; i++) {
    for (size_t j = 0; j < GRID_WIDTH; j++) {
      SDL_SetRenderDrawColor(
        *renderer,
        state -> grid[i][j].r,
        state -> grid[i][j].g,
        state -> grid[i][j].b,
        state -> grid[i][j].a
      );
      SDL_Rect singleBrick = {
        j * BLOCK_SIZE + j * 1 + 1,
        i * BLOCK_SIZE + i * 1 + 1,
        BLOCK_SIZE,
        BLOCK_SIZE
      };
      SDL_RenderFillRect(*renderer, &singleBrick);
    }
  }
}

void renderPiece(SDL_Renderer **renderer, State *state) {
  SDL_SetRenderDrawColor(
    *renderer,
    state -> piece.type.color.r,
    state -> piece.type.color.g,
    state -> piece.type.color.b,
    state -> piece.type.color.a
  );
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (state -> piece.type.blocks[state -> piece.rotation][i][j] != 0) {
        SDL_Rect singleBrick = {
          (state -> piece.x + j) * (BLOCK_SIZE + 1) + 1,
          (state -> piece.y + i) * (BLOCK_SIZE + 1) + 1,
          BLOCK_SIZE,
          BLOCK_SIZE
        };
        SDL_RenderFillRect(*renderer, &singleBrick);
      }
    }
  }
}

void renderScore(SDL_Renderer **renderer, State *state, TTF_Font **font) {
  SDL_Color black = {30, 30, 30, 255};
  char buffer[5];
  sprintf(buffer, "%d", state -> score);
  SDL_Surface* surfaceMessage = TTF_RenderText_Blended(
    *font, buffer, black
  );
  SDL_Texture* mTexture = SDL_CreateTextureFromSurface(
    *renderer,
    surfaceMessage
  );
  SDL_Rect renderQuad = {
    WINDOW_LENGTH - surfaceMessage -> w - 10,
    10,
    surfaceMessage -> w,
    surfaceMessage -> h
  };
  SDL_FreeSurface(surfaceMessage);
  SDL_RenderCopyEx(
    *renderer,
    mTexture,
    NULL,
    &renderQuad,
    0,
    NULL,
    SDL_FLIP_NONE
  );
}

void renderGameOver(SDL_Renderer **renderer, State *state, TTF_Font **font) {
  SDL_Color black = {30, 30, 30, 255};


  SDL_Surface* surfaceMessage = TTF_RenderText_Blended(
    *font, "Game Over", black
  );
  SDL_Texture* mTexture = SDL_CreateTextureFromSurface(
    *renderer,
    surfaceMessage
  );
  SDL_Rect renderQuad = {
    WINDOW_LENGTH / 2 - surfaceMessage -> w / 2,
    200,
    surfaceMessage -> w,
    surfaceMessage -> h
  };
  SDL_FreeSurface(surfaceMessage);
  SDL_RenderCopyEx(
    *renderer,
    mTexture,
    NULL,
    &renderQuad,
    0,
    NULL,
    SDL_FLIP_NONE
  );
}
