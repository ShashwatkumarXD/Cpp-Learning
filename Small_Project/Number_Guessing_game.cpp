#include <iostream>
#include <ctime>

using namespace std;
int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num=(rand() % 50) + 1;

    cout<<"***************************** GUSSE THE NUMBER *****************************"<<endl;

    do{
        cout<<"ENTER A NUMBER BETWEEN (0-50):"<<'\n';
        cin>>guess;
        // tries++;
        if(guess > num){
            cout<<"GUESSED TOO HIGH"<<'\n';
        }
        else if(guess < num){
            cout<<"GUESSED TOO LOW"<<'\n';
        }
        else{
            cout<<"GUESSED CORRECT!!!!  "<<endl;
        }



    }while(guess != num);

    cout<<"****************************************************************************"<<endl;
}
