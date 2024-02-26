#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    int result;
    char op;

    cout<<"**********************CALCULATOR**********************"<<endl;
    cout<<"ENTER A NUMBER"<<endl;
    cin>>num1;

    cout<<"ENTER OPERATION(+,-,*,/)"<<endl;
    cin >> op;

    cout<<"ENTER A NUMBER"<<endl;
    cin>>num2;

    switch(op){
        case '+':
        result=num1+num2;
        cout<<(double)result<<endl;
        break;

        case '-':
        result=num1-num2;
        cout<<"ANSWER "<<(double)result<<endl;
        break;

        case '*':
        result=num1*num2;
        cout<<"ANSWER "<<(double)result<<endl;
        break;

        case '/':
        result=num1/num2;
        cout<<"ANSWER "<<(double)result<<endl;
        break;

        case '%':
        result=num1% num2;
        cout<<"ANSWER "<<(double)result<<endl;
        break;

        default:
        cout<<"CHUTIYA HAI KYA TUH !!!!!!!!!! \n PLEASE ENTER IT CORRECTLY :) :)"<<endl;
        break;


    }
   

    cout<<"******************************************************"<<endl;

} 
