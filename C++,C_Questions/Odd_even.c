#include <stdio.h>
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",number);

    if(number % 2 ==0){
        printf("The number is ever");
    }
    else{
        printf("the number is odd");
    }
    return 0;
}