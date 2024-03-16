#include <iostream>
using namespace std;
// int main(){
//     double sum=0;
//     int n=6;
//     double mean;
//     int x[n]={1,2,3,4,5,6};
//     for(int i=0;i<n;i++)
//         sum=sum+x[i];
//     mean=sum/n;
//     cout<<mean;
//     return 0;
// }

// double func(int n[],int size){
//     double sum=0;
//     double mean;
//     for(int i =0;i<size;i++){
//         sum=sum+n[i];
//     }
//     mean=sum/size;
//     cout<<mean;

// }
// int main(){
//     int x[]={1,2,3,4,5,6};
//     int size=sizeof(x)/sizeof(int);
//     func(x,size);
// }

int func(int arr[],int size){
    if(size<0){
        return 0;
    }else{
        return arr[size]+func(arr,size-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<func(arr,size-1)/size;
}