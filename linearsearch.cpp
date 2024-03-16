#include <iostream>
using namespace std;

int func(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int input;
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(number)/sizeof(number[0]);
    int index;

    cout<<"Enter a number"<<endl;
    cin>>input;
    index=func(number,size,input);
    if(index != -1){
        cout<<input<<"on index "<<index;
    }else{
        cout<<input<<" is not on index ";
    }


}