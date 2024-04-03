#include <bits/stdc++.h>
using namespace std;

void func(int arr[],int n){
    int reversed[n];
    for(int i=0;i<n;i++){
        reversed[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<reversed[i]<<endl;
    }
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    func(arr,n);
    return 0;
}
