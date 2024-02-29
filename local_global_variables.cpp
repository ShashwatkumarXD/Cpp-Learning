#include <iostream>
using namespace std;

int mynum=5; //Global variables = Decleared outside the function.

void func(int mynum){
    cout<<mynum<<'\n';

    cout<<::mynum<<'\n'; //in this we have used (::)which are know as Scope_Resolution_Operators to access Global Variables
}
int main(){
    func(mynum);
    int n=90; //local Variables = Declared inside the function or {}.
    func(n);

    return 0;
}