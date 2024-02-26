#include <iostream>
#include <cmath>


using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout<< "Enter a number"<<endl;
    cin>>a;

    cout<< "Enter a number"<<endl;
    cin>>b;

    a=pow(a,2);  // a is the value and 2 is the power.
    b=pow(b,2);  
    c=sqrt(a+b);


    // c=sqrt(pow(a,2) + pow(b,2)); // we can also combine them 
    

    cout<<"Hypotenuse:"<<c;
    return 0; 

    
}