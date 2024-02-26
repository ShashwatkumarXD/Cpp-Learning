#include <iostream>

using namespace std;

int func(int a){
    a%2==0 ? cout<<"EVEN" : cout<<"ODD";

    return 0;
}
int main(){
    int  x=func(10);
    return 0;
}