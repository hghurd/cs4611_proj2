
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
    float pos[3];
    float dir[3];
};

struct Sphere {
    float centre[3];
    float radius;
};


void getRay();
void getT(struct Ray ray, struct Sphere sphere, float *t1, float *t2);
void scaleVect(struct Ray ray, float scalar);
struct Ray multVect(struct Ray ray1, struct Ray ray2);
float dotProd(struct Ray ray1, struct Ray ray2);
void pointDiff(float point1[3], float point2[3]);


void scaleVect(struct Ray ray, float scalar) {
    for (int i = 0; i < 3; i++) {
        ray.dir[i] = ray.dir[i] * scalar;
    }
}

struct Ray multVect(struct Ray ray1, struct Ray ray2) {
    //NOT FINISHED
    for (int i = 0; i < 3; i++) {

    }
}

float dotProd(struct Ray ray1, struct Ray ray2) {
    float result = (float) 0.0;
    for (int i = 0; i < 3; i++) {
        result += ray1.dir[i] * ray2.dir[i];
    }
    return result;
}

void pointDiff(float point1[3], float point2[3]) {
    for (int i = 0; i < 3; i++) {
        point1[i] = point1[i] - point2[i];
    }
}



void getT(struct Ray ray, struct Sphere circle, float *t1, float *t2) {

}

int main() {

    int index = 0;
    struct Sphere circle;
    circle.centre[0] = (float) 2.0;
    circle.centre[1] = (float) 2.0;
    circle.centre[2] = (float)-16.0;
    circle.radius = (float) 5.3547;

    for (int y = 0; y < 512; y++) {
        for (int x = 0; x < 512; x++) {
            index = (y * IMG_ROW) + (x * 3 + y);
            //generate ray for each pixel
            //intersect ray with geometry (big eqn)
            //set pixel to colour of the closest geometry that you hit
            float *tPos, *tNeg = NULL;
            //Value of the discriminant
            float disVal =  (float) powf(d * (e - circle.centre), 2) -
                    (d * d) * ((e - circle.centre) * (e - circle.centre) - powf(circle.radius, 2));

            /*
             * FROM: Raytracer 2: Ray-Sphere Intersection
             * d = direction of the vector (3D)
             * e = ray start position (3D)
             * t = Value we need to plug into the ray equation to determining where the ray intersection occurs
             */
            tPos = (float) ((d * -1) * (e - circle.centre) + sqrt(disVal) / (d * d));
            tNeg = (float) ((d * -1) * (e - circle.centre) - sqrt(disVal) / (d * d));
        }
    }

    return 0;
}
