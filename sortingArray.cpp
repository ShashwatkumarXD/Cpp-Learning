#include <bits/stdc++.h>
using namespace std;

void func(int arr[],int size){
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
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

