#include <stdio.h>
int main() {
    int arr[100], n, i, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
