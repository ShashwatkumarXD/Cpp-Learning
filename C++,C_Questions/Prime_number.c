#include <stdio.h>
int main(){
    int a,b=0;
    printf("enter the number: ");
    scanf("%d",a);

    for(int i=0;i<=a;i++){
        if(a % i == 0){
            b=1;
        }
    }
    if(a==1){
        printf("the number is neither prime nor composite\n");
    }
    else if(b==1){
        printf("the number is composite\n");
    }
    else{
        printf("the number prime\n");
    }
}    
