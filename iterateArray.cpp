#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int number[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<sizeof(number)/sizeof(int);i++){
        for(int j=0;j<i;j++){
            cout<<number[j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
} 
