// #include <iostream>
#include <stdio.h>
// using namespace std;

int main(){
    int num, ans = 0, num3,temp = 0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    num3=num;  // 1234
    while(num3!=0){
        temp = num3 % 10;  // 4
        ans=ans*10+temp;  // 4
        num3=num3/10;  // 123 
    }
    if(ans==num)
        printf("the number is pallindrome");

    else
        printf("the number is not pallindrome");
}