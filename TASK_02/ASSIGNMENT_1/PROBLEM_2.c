#include <stdio.h>
#include <stdlib.h>

int main() {
    int var = 0x332211;
    char *ptr = &var;

    // Explanation comments remain the same as in the original code
    printf("*ptr++ = 0x%X\n", *ptr++);

    ptr--; // Resetting pointer to initial position

    printf("*++ptr = 0x%X\n", *(++ptr));

    ptr--; // Resetting pointer to initial position

    (*ptr)++; // Incrementing the value pointed to by ptr

    printf("++*ptr = 0x%X\n", *ptr);

    return 0;
}
