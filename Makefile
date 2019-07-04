TARGET = bin/clox
GCC = gcc
FLAGS = -Wall -Werror -std=c99
DFLAGS = -fsanitize=address -fsanitize=leak
SRC = src/main.c src/memory.c src/chunk.c src/debug.c
OBJ = main.o memory.o chunk.o debug.o

clox: $(SRC)
	$(GCC) $(FLAGS) $(SRC) -g -o $(TARGET)

debug: $(SRC)
	$(GCC) $(FLAGS) $(DFLAGS) $(SRC) -o $(TARGET)
