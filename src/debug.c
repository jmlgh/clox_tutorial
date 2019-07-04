#include <stdio.h>

#include "debug.h"

void disassembleChunk(Chunk* chunk, const char* name) {
  printf("== %s ==\n", name);
  // updating offset will no be handled by the loop
  // but by the returning value of the disassemnbleInstruction function
  for (int offset = 0; offset < chunk->count;) {
    offset = disassembleInstruction(chunk, offset);
  }
}


static int simpleInstruction(const char* name, int offset) {
  printf("%s\n", name);
  // returns the next byte (remember the for loop in disassemleChunk)
  return offset + 1;
}


int disassembleInstruction(Chunk* chunk, int offset) {
  // where in the chunk this insruction is
  // integer should have 4 zeros before it (if width is less than 4)
  printf("%04d ", offset);

  uint8_t instruction = chunk->code[offset];
  switch(instruction) {
  case OP_RETURN:
    return simpleInstruction("OP_RETURN", offset);
  default:
    printf("Unknown opcode %d", instruction);
    return offset + 1;
  }
}
