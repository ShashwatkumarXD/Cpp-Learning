//EXAMPLE using NESTED KEYWORD

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//EXAMPLE
// int main(){
//     /*
    /*loop(){

        loop(){

            
        }
    }*/
// }

int main(){

//for print pattern 
//x
//xx
//xxx
//xxxx
    for(int i=0;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<"x";
        }
        cout<<endl;
    }


//for printing PATTERN
// 1
// 12
// 123
// 1234
// 12345

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }

// FOR PRINTING PATTERN
// A
// AB
// ABC
// ABCD

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>('A'+j);
        }
        cout<<endl;
    }

}
