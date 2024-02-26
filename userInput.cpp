#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    string address;

    cout<<"Enter your name"<<endl; //<< insertion Operators
    getline(cin >>ws,name); //>> extraction Operator

    cout<<"Enter Address"<<endl;
    getline(std::cin >>ws, address); // >>ws (for any white spaces) this portion will eliminate any newline character or 
    // any white space before any user input. 
    

    cout<<"Enter your age"<<endl;
    cin>>age;

    cout<<"ENTERED NAME:" <<name<<endl;
    cout<<"ENTERED AGE:" <<age<<endl;
    cout<<"ENTERED ADDRESS:" <<address<<endl;


    return 0;
}