#include <iostream>
#include <ctime>

using namespace std;
int main(){
    int n;
    int guess;
    cout<<"***************************** GUSSE THE NUMBER *****************************"<<endl;
    srand(time(NULL)); //srand is a function used for printing random numbers, amd time is known as seed.
    int num=(rand()% 6)+1; //modulus(%) 6 is used to initialize that rand() only have to provide random number till 6, and +1 to include 6 also. 

    cout<<"ENTER YOUR NUMBER BETWEEN 1-6"<<endl;
    cin>>n;
    guess=n;
    cout<<"YOUR GUESSED NUMBER IS ---> "<<guess<<endl;


    cout<<"NUMBERS IS:"<<'\n';
    cout<<num<<endl;
    if(num==guess){
        cout<<"YOU WON!!"<<'\n';
    }
    else{
        cout<<"YOU LOSS, TRY AGAIN ;_;"<<'\n';
    }

    cout<<"****************************************************************************"<<endl;

    return 0;
}
