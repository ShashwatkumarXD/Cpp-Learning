#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int row=5;
    int column=6;
    for(int i=1;i<=row;i++){
        for(int j=0;j<column;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}
