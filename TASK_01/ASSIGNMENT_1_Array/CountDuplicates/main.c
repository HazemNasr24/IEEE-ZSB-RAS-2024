#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, count = 0; // Declare variables to store the size of the array and count of duplicate elements

    // Prompt the user to input the size of the array
    printf("Input size of array: ");
    scanf("%d", &n);

    // Declare an array 'arr' of size 'n'
    int arr[n];

    // Loop to input elements into the array
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Loop to check for duplicate elements in the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment count if a duplicate element is found
                break;   // Break out of the inner loop once a duplicate is found for efficiency
            }
        }
    }
    printf("Total number of duplicate elements in the array: %d\n", count);

    return 0;
}
