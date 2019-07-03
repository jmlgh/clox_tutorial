#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;


typedef struct {
  int count;
  int capacity;
  // uint8_t == byte
  uint8_t* code;
} Chunk;


void initChunk(Chunk*);
void writeChunk(Chunk*, uint8_t);

#endif
