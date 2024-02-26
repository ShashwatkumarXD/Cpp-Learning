#include <iostream>

using namespace std;

int main(){
    char grade;
    cout<<"Enter Grade:"<<endl;
    cin>>grade;

    switch(grade){
        case 'A':                // we can do with int variables // IN THAT CASE WE HAVE TO DO // case 1:(lik this)
        cout<<"Excellent";
        break;
        case 'B':
        cout<<"Very Good";
        break;
        case 'C':
        cout<<"Good";
        break;
        case 'D':
        cout<<"Have to prove";
        break;
        case 'F':
        cout<<"FAIL";
        break;
        default:
        cout<<"Enter right values";

    }
    return 0;
}