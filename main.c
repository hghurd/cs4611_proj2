
/**
 * Author:          Garrett Hurd
 * MTU Username:    hghurd
 * Date:            2022-09-20
 * Filename:        main.c
 * Description:
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#define IMG_SIZE (512 * 512 * 3 - 1)
#define IMG_ROW (512 * 3 - 1)
#define IMG_DIM 512

struct Ray {
    double pos[3];
    double dir[3];
};

void getRay();


int main() {

    int pix = 0;

    for (int y = 0; y < 512; y++) {
        for (int x = 0; x < 512; x++) {
            pix = (y * IMG_ROW) + (x * 3 + y);
        }
    }

    return 0;
}
