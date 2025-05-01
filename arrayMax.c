#include <stdio.h>

int main() {
    int arr[] = {10, 25, 67, 89, 34, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
