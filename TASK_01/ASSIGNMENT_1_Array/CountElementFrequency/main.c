#include <stdio.h>
#include <stdlib.h>

int main() {

    int n; // Declare variable to store the size of the array

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

    // Declare an array 'freq' to store frequency of each element (assuming elements are within the range 0 to 1000)
    int freq[1000] = {0};

    // Loop to count frequency of each element in the array
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < 1000; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
