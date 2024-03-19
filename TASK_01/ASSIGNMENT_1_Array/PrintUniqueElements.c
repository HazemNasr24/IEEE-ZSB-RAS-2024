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

    // Sorting the array in ascending order using bubble sort algorithm
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Printing unique elements in the array
    printf("Unique elements in array: ");
    printf("%d ", arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
