#include <stdio.h>
#include <stdlib.h>

#include "pattern.h"

void print_usage(const char* arg0) {
  printf("Usage: %s <pattern_code>\n", arg0);
}

int main(int argc, char** argv) {
  if(argc < 2) {
    print_usage(argv[0]);
    return 1;
  }

  const size_t width = GRID_SIZE * BLOCK_SIZE;
  const size_t height = GRID_SIZE * BLOCK_SIZE;
  const pattern_t pattern_code = atoi(argv[1]);
  
  image_t img = create_image(width, height);
  draw_pattern(pattern_code, &img);

  save_image(&img, "result.ppm"); 
  destroy_image(&img);

  return 0;
}