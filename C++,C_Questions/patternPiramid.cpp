#include <iostream>
#include <stdio.h>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    if(n<0 || n>25){
        return;
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<'\n';
        }
        
    }
}
int main(){
    int x=9;
    nStarTriangle(x);
}