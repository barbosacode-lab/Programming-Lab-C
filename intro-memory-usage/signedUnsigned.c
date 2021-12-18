#include <stdio.h>

// "In C programming language, the overflow of unsigned int is well defined than signed int. Unsigned int is much better than signed int as the range for unsigned int is larger than signed int and the modulus operation is defined for unsigned int and not for signed int" -- https://www.educba.com/unsigned-int-in-c/

// ...therefore unsigned int has a higher accuracy!

int main() {
    int a = -57;                       // default signed
    unsigned int b = (unsigned int)a;  // explicit manually cast
    printf("The unsigned value of negative signed value 0x%x\n or default representation %u", a, a);
    return 0;
}