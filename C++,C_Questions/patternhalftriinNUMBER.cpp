#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int column=5;
    for(int i=0;i<=column;i++){
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<'\n';
    }
}