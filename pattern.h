#ifndef PATTERN_H
#define PATTERN_H

#include "image.h"

typedef unsigned short pattern_t;

#define GRID_SIZE 5
#define UNIQUE_CELLS_X ((GRID_SIZE + 1) / 2)
#define BLOCK_SIZE 64
#define BACKGROUND 0xffeeeeee
#define FOREGROUND 0xffaa9988

void draw_pattern(pattern_t pattern, image_t* image);

#endif // PATTERN_H