CC = gcc
SDLFLAGS = $(shell pkg-config --cflags sdl2)
SDLLIBS = $(shell pkg-config --libs sdl2)
CFLAGS = -g -Wall $(SDLFLAGS)
OBJECTS = main.o window.o state.o type.o

default: tetris clean

tetris: $(OBJECTS)
	$(CC) $(CFLAGS) -o tetris $(OBJECTS) $(SDLLIBS)

main.o: src/defines.h src/window.h src/state.h
	$(CC) $(CFLAGS) -c src/main.c

window.o: src/defines.h src/window.h src/state.h
	$(CC) $(CFLAGS) -c src/window.c

state.o: src/defines.h src/type.h src/state.h
	$(CC) $(CFLAGS) -c src/state.c

type.o: src/defines.h src/type.h
	$(CC) $(CFLAGS) -c src/type.c

clean:
	rm -f $(OBJECTS)
