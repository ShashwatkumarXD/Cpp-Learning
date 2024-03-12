#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    int column=6;
    for(int i=1;i<=column;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}