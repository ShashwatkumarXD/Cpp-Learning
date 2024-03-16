#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    char num[]={'A','B','C','D'};
    int num1[]={1,2,3,4,5,6,7,8};
    // string name[]={"Shashwat"/*"Jaspreet","Anshika","Ritika"*/};
    // cout<<sizeof(num)<<" Bytes"<<endl;
    // cout<<sizeof(name)<<" Bytes"<<endl;
    cout<<sizeof(num1)/sizeof(num1[0])<<" ELEMENT"<<endl;
}