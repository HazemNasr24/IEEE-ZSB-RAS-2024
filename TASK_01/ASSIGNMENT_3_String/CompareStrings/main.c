#include <stdio.h>
#include <stdlib.h>

int main() {

    char str1[100], str2[100]; // Declare two character arrays 'str1' and 'str2' with a size of 100
    int flag = 0; // Initialize a flag variable to 0

    // Prompt the user to enter the first string
    printf("Please enter the first string: ");
    gets(str1);

    // Prompt the user to enter the second string
    printf("Please enter the second string: ");
    gets(str2);

    // Compare characters of both strings until either one reaches the null terminator
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    // Print whether the strings are equal or not based on the flag value
    if (flag == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
