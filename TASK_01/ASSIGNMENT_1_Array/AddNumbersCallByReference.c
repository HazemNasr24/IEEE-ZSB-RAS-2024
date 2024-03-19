#include <stdio.h>
#include <stdlib.h>

// Function declaration for adding two numbers
void addnumber(int *num1 , int *num2 , int *result);

int main() {

    int num1, num2, sum; // Declare variables for the two numbers to be added and the result

    // Prompt the user to enter the first and the second number
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the addnumber function with addresses of num1, num2, and sum
    addnumber(&num1, &num2, &sum);

    // Print the result of the addition
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}

// Function definition for adding two numbers
void addnumber(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}
