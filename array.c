#include <stdio.h>
int main(){
    int arr[5];

    //i want the user to put these 5 values 
    printf("Enter 5 integers: ");

    for(int i=0; i<5;++i){
        scanf("%d", &arr[i]);

        
    }

    //display 
    printf("the final array: \n");
    for( int i=0;i<5;++i){
        printf("%d\n", arr[i]);

    }
    return 0;





}