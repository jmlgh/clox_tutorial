TARGET = bin/clox
GCC = gcc
FLAGS = -Wall -Werror -std=c99
SRC = main.c memory.c chunk.c
OBJ = main.o main.o

clox: $(SRC)
	$(GCC) $(FLAGS) $(SRC) -o $(TARGET)
