#include <iostream>

using namespace std;

int main(){
    int age;

    cout<<"enter for age"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"welcome to my page XD"; // we use if statement to check the condition.
    }
    else if(age==0 || age<12){
        cout<<"CHOTTE BACHE XDDDDD";
    }
    else{
        cout<<"Still Welcome but sorry if you cant understand anything";
    }
    return 0;
}