#include <stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }

}

int main(){
    int num1, num2, maximum, result;

    printf("enter number 1: ", num1);
    scanf("%d", &num1);
    printf("enter number 2: ", num2);
    scanf("%d", &num2);

    maximum= max(num1,num2);
    result= maximum+10;


    printf("maximum= %d\n", maximum);
    printf("result= %d\n", result);
}