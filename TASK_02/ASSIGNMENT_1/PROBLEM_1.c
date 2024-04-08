#include <stdio.h>
#include <stdlib.h>

int main() {
    /* These pointers are Wild Pointers so they will have garbage values */
    int *intPtr;
    char *charPtr;
    long long *longPtr;

    /* Print the initial values of the pointers */
    printf("intPtr = 0x%X\n", intPtr);
    printf("charPtr = 0x%X\n", charPtr);
    printf("longPtr = 0x%X\n", longPtr);
    printf("----------------------\n");

    /* Increment the pointers */
    intPtr++; /* Since int is typically 4 bytes, intPtr will increment by 4 bytes */
    charPtr++; /* Since char is 1 byte, charPtr will increment by 1 byte */
    longPtr++; /* Since long long is typically 8 bytes, longPtr will increment by 8 bytes */

    /* Print the incremented values of the pointers */
    printf("intPtr = 0x%X\n", intPtr);
    printf("charPtr = 0x%X\n", charPtr);
    printf("longPtr = 0x%X\n", longPtr);

    return 0;
}
