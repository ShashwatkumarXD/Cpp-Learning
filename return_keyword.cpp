#include <iostream>
#include <stdio.h>
using namespace std;


 string fullname(string string1, string string2){
    return string1+ " " + string2; // use of string keyword
}

double square(int n){
    return n*n;   // use of return keyword.
}
int main(){
    double area;
    double length=2.4;
    area = square(length);

    string a="Shashwat";
    string b="Kumar";
    string c=fullname(a,b);

    cout<<"YOUR FULL-NAME IS: "<<c<<endl;
    cout<<"AREA OF SQUARE: "<<area<<"cm^2\n";

    return 0;
}