#include <stdio.h>
// Passing Parameters - call by value

int add(int a, int b) {
    return a + b;
};

int main() {
    int v1 = 30;
    int v2 = 12;
    // printf("The result is %d", add((int)30, (int)12)); // dynamic cast
    printf("The result is %d", add(v1, v2));
    return 0;
};