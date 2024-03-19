#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100]; // Declare two character arrays 'str1' and 'str2' with a size of 100
    printf("Please enter the first string: "); // Ask the user to enter the first string
    gets(str1); // Read input from the user and store it in 'str1'

    // Copy contents of 'str1' to 'str2'
    for(int i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }

    // Print the original string 'str1' and the copied string 'str2'
    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
