#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk*, const char*);
int disassembleInstruction(Chunk*, int);

#endif
