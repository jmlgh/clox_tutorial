#ifndef clox_memory_h
#define clox_memory_h

#define GROW_CAPACITY(capacity) \
  (capacity) < 8? 8 : (capacity) * 2

#define GROW_ARRAY(previous, type, oldCount, count) \
  (type*)reallocate(previous, sizeof(type) * (oldCount), \
		    sizeof(type) * count)

#define FREE_ARRAY(type, pointer, oldCount) \
  reallocate(pointer, sizeof(type) * (oldCount), 0)

/*
 * All memory operations will be performed by this function
 * what operation to perform is controled by size_t parameters
 * 
 * oldSize = 0 and newSize != 0 ----> Allocate a new block
 * oldSize != 0 and newSize = 0 ----> Free allocation
 * oldSize != 0 and newSize < oldSize ----> Shrink allocation
 * oldSize != 0 and newSize > oldSize ----> Grow allocation 
*/


void* reallocate(void* previous, size_t oldSize, size_t newSize);

#endif
