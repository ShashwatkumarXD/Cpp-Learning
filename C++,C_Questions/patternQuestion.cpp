#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    // Write your code here.
    int start=0;
    if(n<0 || n>20){
        return;
    }
    else{
        for(int i= 1;i<=n;i++){
            if(i%2==0){
                start=0;
        }else{
            start=1;
        }
            for(int j=0;j<i;j++){
                cout<<start;
                start=1-start;
            }
        cout<<'\n';
    }
}
}
int main(){
    int x= 3;
    nBinaryTriangle(x);
}