#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "image.h"

int main() {
  const size_t width = 512;
  const size_t height = 512;
  
  image_t img = create_image(width, height);

  save_image(&img, "result.ppm"); 
  destroy_image(&img);

  return 0;
}