#include <stdio.h>
#include <stdlib.h>

// Function declaration
void increment(int *ptrNum);

int main(){
    int num = 0x01;

    // Function pointer declaration and assignment with renamed variable
    void (*ptrIncrement)(int *) = &increment;

    printf("Num = 0x%X\n", num);

    // Call the function using the function pointer
    (*ptrIncrement)(&num);

    printf("Num = 0x%X\n", num);

    return 0;
}

// Function definition with renamed variable
void increment(int *ptrNum) {
    ++*ptrNum;
}
