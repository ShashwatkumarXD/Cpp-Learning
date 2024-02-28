//EXAMPLE using break and continue keyword.

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int x;
    for(int i=1;i<=20;i++){
        if(i==10){
            // break; // if we use break keyword the loop will stop at 9 but
            continue; //if we use continue the loop will skip 10 according to the condition. and complete remaining result.
        }
        cout<<i<<endl;
    }
    return 0;
}