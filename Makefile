TARGET = bin/clox
GCC = gcc
FLAGS = -Wall -Werror -std=c99
SRC = main.c
OBJ = main.o

clox: $(SRC)
	$(GCC) $(FLAGS) $(SRC) -o $(TARGET)
