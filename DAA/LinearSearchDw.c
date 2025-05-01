#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}, key = 30, i = 0, n = 5;
    do {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
        i++;
    } while(i < n);
    printf("Not found\n");
    return 0;
}
