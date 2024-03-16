#include <iostream>
using namespace std;

int sum(int array[], int size){
    int sumof=0;
    for(int i=0;i<size;i++){
        sumof=sumof+array[i];
    }
    return sumof;
}

int main(){
    int sumof;
    int array[]={10,10,10};
    int size=sizeof(array)/sizeof(int);
    sumof=sum(array,size);
    cout<<sumof;

}
