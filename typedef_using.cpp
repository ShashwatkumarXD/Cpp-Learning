//Now, typedef have been replaced by new "using keyword" 
//EXAMPLE:

#include <iostream>

using namespace std;

using a=string; // using to the name of DATA-TYPE.
using n=int; // using to the name of DATA-TYPE.

int main (){
    a firstname="Shashwat";
    a lastname="Kumar";
    n age=20;

    cout<<"First Name:"<<endl<<firstname<<endl<<"last Name:"<<endl<<lastname<<endl;
    cout<<"Age:"<<endl<<age;
    return 0;
}
