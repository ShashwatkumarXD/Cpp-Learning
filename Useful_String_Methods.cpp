// variable_name.length >,<,== anything; (FOR CHECKING FOR ANY CONDITION)
// variable_name.empty(); (FOR CHECKING DOES THERE IS SOMETHING OR NOT)
// variable_name.clear(); (TO CLEAR EVERY THING WE HAVE ENTERED IS STRING)
// variable_name.appent(@gmail.com); (TOO ADD ANTHING AFTER THE ENTERED THING)(AND IT COULD APPEND ANYTHING IN PLACE OF @gamil.com)
//cout<<variable_name.atr("any address of the string "); EXAMPLE: string name="SHASHWAT";----- cout<<name.at(1)------- OUTPUT= H;
//variable_name.insert("address", "what we want to enter");
//varibale_name.find(); IT WILL GIVE THE ADDRESS OF THE THING WE ARE FINDING.

#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"ENTER THE NAME"<<endl;
    cin>>name;
    if(name.length()>7){
        cout<<"Chutiye 7 ke ander rakh na aapna naam BC"<<endl;
        cout<<"PHIR SE NAAM LIKH BC";
        main();
    }
    else if(name.empty()){
        cout<<"BC NAAM LIKHEGA MC SAALA";
        cout<<"PHIR SE NAAM LIKH BC";
        main();
    }
    else{
        cout<<"GOOD NAME";
    }
    return 0;
    
}