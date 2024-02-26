#include <iostream>

using namespace std;

int main(){
    double temp;
    char unit;
    cout<<"***************************Temperature Conversion***************************"<<'\n';
    cout<<"F: For fahrenheit"<<'\n';
    cout<<"C: For celcius"<<'\n';
    cout<<"Enter what you want to convert:"<<'\n';
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<<"ENTER THE CELCIUS"<<endl;
        cin>>temp;
        temp=(1.8*temp)+32.0;
        cout<<"THE TEMPERATURE IS:"<<temp<<endl;
    }
    else if(unit == 'C' || unit == 'c'){
        cout<<"ENTER THE FAHRENHEIT"<<endl;
        cin>>temp;
        temp=(temp - 32)/1.8;
        cout<<"THE TEMPERATURE IS:"<<temp<<'\n';

    }

    cout<<"****************************************************************************";

}
