#include <stdio.h>
#include <stdlib.h>

int main() {
    int value = 010;
    int *pointerA = &value;
    *pointerA = 42;
    int *pointerB = NULL;
    int *pointerC;

    printf("value: %d\n", value);
    printf("&value: %p\n", &value);
    printf("pointer: %p\n", pointerA);

    printf("pointerB: %p\n", pointerB);
    printf("pointerC: %p\n", pointerC);

    // printf("*pointerB: %p", *pointerB);  // Error: Segmentation Fault

    return 0;
}