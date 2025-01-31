#include <stdio.h>

int LinearSearch(int array[], int n, int key){
    int array[] = {12,23,56,3,6,333,8};
    int n = sizeof(array)/sizeof(array[0]);
    int key , i = 0;

    
    for(i=0;i<n;i++){
        if (array[i] == key){
            printf("element found at index %d", i);
            
        }
    }

    
}