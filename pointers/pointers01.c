// All about pointers! =)

#include <stdio.h>

int main() {
    int foo = 10;         // 4 bytes
    int *pointer = &foo;  // 8 bytes
    *pointer = 42;
    printf("the memory address pointer = %p\n", &pointer);
    printf("the pointer value = %d\n", *pointer);
    printf("the memory address foo = %p\n", &foo);
    if (foo == *pointer) {
        printf("Equals, bro!");
    } else {
        printf("Different!");
    }
    return 0;
}
