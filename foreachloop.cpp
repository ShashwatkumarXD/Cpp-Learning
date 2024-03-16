//foreach LOOP is used to run the condition from staring to end with ease but it is less flexible compaired to the "for LOOP" the only advantage is that 
//it requires less syntex.
//FOR LOOP could be used anyway like from start to end , end to start etc
#include <iostream>
using namespace std;
int main(){
    string students[]={"Shashwat","jaspreet","Anshika","Ritika"};
    for(string name:students){
        cout<<name<<endl;
    }
    return 0;
}