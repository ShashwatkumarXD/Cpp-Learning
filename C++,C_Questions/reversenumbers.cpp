#include <iostream>
#include <stdio.h>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    if(n<1 || n>25){
        return;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                cout<<n-j+1<<" ";
            }
            cout<<'\n';
        }
    }
}
int main(){
    int x=6;
    nNumberTriangle(x);
}