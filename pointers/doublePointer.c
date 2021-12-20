#include <math.h>
#include <stdio.h>

int main() {
    // manipulate a variable content using a pointer (indirect access)
    float x = sqrt(2);
    float *floatPointer = &x;

    printf("x: %f\n", x);

    float **doublePointer;
    doublePointer = &floatPointer;
    **doublePointer = M_PI;

    printf("x: %f\n", x);
};