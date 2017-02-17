CC = gcc
SDLFLAGS = $(shell pkg-config --cflags sdl2)
SDLLIBS = $(shell pkg-config --libs sdl2) -lSDL2_ttf
CFLAGS = -g -Wall $(SDLFLAGS)
OBJECTS = main.o window.o state.o type.o actions.o

default: tetris clean

tetris: $(OBJECTS)
	$(CC) $(CFLAGS) -o tetris $(OBJECTS) $(SDLLIBS)

main.o: src/defines.h src/window.h src/state.h src/actions.h
	$(CC) $(CFLAGS) -c src/main.c

window.o: src/defines.h src/window.h src/state.h
	$(CC) $(CFLAGS) -c src/window.c

state.o: src/defines.h src/type.h src/state.h
	$(CC) $(CFLAGS) -c src/state.c

type.o: src/defines.h src/type.h
	$(CC) $(CFLAGS) -c src/type.c

actions.o: src/defines.h src/state.h src/actions.h src/type.h
	$(CC) $(CFLAGS) -c src/actions.c
clean:
	rm -f $(OBJECTS)
