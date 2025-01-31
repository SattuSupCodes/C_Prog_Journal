#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(array)/ sizeof(array[0]);
    int key, i = 0;
    
    printf("enter which number you wish to search: ");
    scanf("%d", &key);
    
    for (i=0; i<n; i++){
        if(array[i]==key){
            printf("element found at index %d\n", i);
            
            break;
          
        
            
        } else {
        printf("Element not found in the array.\n");
        break;
    }
    
    }
       

    return 0;
}