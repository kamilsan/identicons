#include "image.h"

#include <stdio.h>
#include <stdlib.h>

image_t create_image(size_t width, size_t height) {
  image_t result = {0};
  
  result.width = width;
  result.height = height;
  result.pixels = calloc(3 * width * height, 1);

  return result;
}

void destroy_image(image_t* image) {
  free(image->pixels);
}

void save_image(image_t* image, const char* filename) {
  FILE* fp = fopen(filename, "wb");
  fprintf(fp, "P6\n%zu %zu\n255\n", image->width, image->height);

  const size_t len = 3 * image->width * image->height;
  fwrite(image->pixels, 1, len, fp);
  fclose(fp);
}