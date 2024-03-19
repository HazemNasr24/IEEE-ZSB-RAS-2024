#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define a character array 'str' containing the string "IEEE-ZSB-RAS-2024"
    char str[] = "IEEE-ZSB-RAS-2024";

    // Iterate through each character in the string until reaching the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // Print each character followed by a newline character
        printf("%c\n", str[i]);
    }

    return 0;
}
