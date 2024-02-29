#include <stdio.h>
int main(){
    int number,sum=0;
    printf("enter the number ");
    scanf("%d",number);

    for(int i=1;i<number;i++){
        if(number % i==0){
            sum = sum+1;
        }
    }
    if(sum==number){
        printf("the no. is perfect number");
    }
    else{
        printf("the number is not a perfect no.");
    }
}

