#ifndef IMAGE_H
#define IMAGE_H

#include <stddef.h>

typedef struct image_t {
  unsigned char* pixels;
  size_t width;
  size_t height;
} image_t;

image_t create_image(size_t width, size_t height);
void destroy_image(image_t* image);
void set_pixel(image_t* image, size_t x, size_t y, unsigned int color);
void save_image(image_t* image, const char* filename);

#endif // IMAGE_H