#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int number[]={1,2,3,4,5,6,7};
    for(int i=0;i<sizeof(number)/sizeof(int);i++){
        cout<<number[i]<<endl;
    }
    return 0;
} 

