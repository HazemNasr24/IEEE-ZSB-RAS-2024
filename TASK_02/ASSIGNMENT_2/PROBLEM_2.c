#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[] = {0, 1, 2, 3, 4, 5};
    int *pointer = array;

    int length = sizeof(array) / sizeof(array[0]);

    printf("Using array indexing:\n");
    for (size_t i = 0; i < length; i++) {
        printf("0x%X\t", pointer[i]);
    }

    printf("\n--------------------------\n");

    printf("Using pointer arithmetic:\n");
    for (size_t i = 0; i < length; i++) {
        printf("0x%X\t", *(pointer + i));
    }

    return 0;
}
