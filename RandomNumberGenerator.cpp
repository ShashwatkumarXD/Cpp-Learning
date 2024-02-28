#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;



int main(){

    // srand(time(NULL));   // it will give to random no. from 0 to 32767(minimal range)
    // int num1=rand();
    // cout<<num1<<endl;

    // return 0;

    // srand(time(NULL));   // it will print/give random number from 0 - 6(AS DICE)
    // int num2 = (rand()%6)+1;
    // cout<<num2<<endl;

    srand(time(NULL));      // it will give random number from 0-6 (like we roll 3 dice)
    int num3 = (rand() % 6)+1;
    int num4 = (rand() % 6)+1;
    int num5 = (rand() % 6)+1;

    cout<<num3<<endl;
    cout<<num4<<endl;
    cout<<num5<<endl;

    return 0;
}
