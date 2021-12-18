#include <stdio.h>

// The sizeof method return unsigned long int data type.
// So we use %ld as format especifier.

int main() {
    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(short) = %ld bytes\n", sizeof(short));
    printf("sizeof(double) = %ld bytes\n", sizeof(double));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(long long) = %ld bytes\n", sizeof(long long));
    printf("sizeof(void) = %ld bytes\n\n", sizeof(void));
    printf("void (*) = %ld bytes\n", sizeof(void *));
    printf("int (*) = %ld bytes\n", sizeof(int *));
    printf("int (**) = %ld bytes\n", sizeof(int **));
    printf("int (***) = %ld bytes\n", sizeof(int ***));
    printf("float (*) = %ld bytes\n", sizeof(float *));
}