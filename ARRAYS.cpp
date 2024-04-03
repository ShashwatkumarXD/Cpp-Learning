#include <iostream>
#include <stdlib.h>
using namespace std;
void func(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"ENTER NUMBER"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    func(arr,n);
    return 0;
}



