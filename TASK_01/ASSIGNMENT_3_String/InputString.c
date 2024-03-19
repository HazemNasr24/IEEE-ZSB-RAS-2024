#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a character array 'string' with a size of 100
    char string[100];
    // Ask the user to enter a string
    printf("Please enter a string: ");
    // Read input from the user and store it in the 'string' array
    gets(string);
    // Print the entered string
    printf("You entered: %s\n", string);
    return 0;
}
