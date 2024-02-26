#include <iostream>
using namespace std;

int main(){
    int a=8;
    int b=10;
    int c=a/(double)b*100; // "eplicit" datatype conversion.
    cout<<c<<"%";
    return 0;
}