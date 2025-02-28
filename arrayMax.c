#include <stdio.h>

int main() {
    int arr[] = {10, 25, 67, 89, 34, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int max = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger value is found
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
