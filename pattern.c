#include "pattern.h"

#include <assert.h>
#include <stdlib.h>

void draw_pattern(pattern_t pattern, image_t* image) {
  assert(UNIQUE_CELLS_X * GRID_SIZE < (8 * sizeof(pattern_t)));

  for(size_t y = 0; y < image->height; ++y) {
    for(size_t x = 0; x < image->width; ++x) {
      size_t gx = x / BLOCK_SIZE;
      size_t gy = y / BLOCK_SIZE;

      size_t gx_sym = abs((int)gx - UNIQUE_CELLS_X + 1);

      size_t grid_index = gy * UNIQUE_CELLS_X + gx_sym;
      if((pattern >> grid_index) & 1) {
        set_pixel(image, x, y, FOREGROUND);
      }
      else {
        set_pixel(image, x, y, BACKGROUND);
      }
    }
  }
}