#include <iostream>
using namespace std;

int main(){
    int n;
    bool boy = true;
    cout<<"ENTER VALUE"<<endl;
    cin>>n;

    // if(a>0 && a<10){   // &&(and) operator is used to initiaze two condition and the entered value should lies between these two condition 
    //     cout<<"a is good";
    // }
    if(n==0 || n<10){     // ||(or) operator is used to check that out of two atleast one condition should be correct.
        cout<<"Number is natural number";
    }

    // if(!boy){
    //     cout<<"It is boy";
    // }
    else{
        cout<<"Number is whole number";
    }

    return 0;
}