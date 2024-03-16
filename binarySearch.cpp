#include<iostream>
using namespace std;
int main(){
        int key=3;
        int n=6;
        int arr[n]={1,2,3,4,5,6};
        int low=arr[0];
        int high=arr[n-1];
        int result=0;
        while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==key){
                        result=mid;
                        break;
                }else if(arr[mid]>key){
                        high=mid-1;
                }else{
                        low=mid+1;
                }
        }
        cout<<result;
        return 0;       
}
