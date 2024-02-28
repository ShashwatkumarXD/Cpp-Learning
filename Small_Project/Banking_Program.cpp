#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        cout << "******************\n";
        cout << "ENTER YOUR CHOICE:\n";
        cout << "******************\n";
        cout << "1. SHOW BALANCE\n";
        cout << "2. DEPOSITE MONEY\n";
        cout << "3. WITHDRAW MONEY\n";
        cout << "4. Exit\n";
        cin >> choice;

        // cin.clear(); 
        // fflush(stdin);

        switch(choice){
            case 1: 
            showBalance(balance);
            break;
            case 2: 
            balance += deposit();
            showBalance(balance);
            break;
            case 3: 
            balance -= withdraw(balance);
            showBalance(balance);
            break;
            case 4: 
            cout << "THANKS FOR VISITING!\n";
            break;
            default:
            cout << "IINVALID CHOICE\n";
        }
    }while(choice != 4);

    return 0;
}
void showBalance(double balance){
    
    cout << "YOUR BANK BALANCE IS: $"<< setprecision(2) << fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;

    cout << "ENTER THE AMOUNT YOU WANT TO DEPOSITE: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout << "THAT'S INVALID AMOUNT:\n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;

    cout << "ENTER AMOUNT YOU WANT TO WITHDRAW:";
    cin >> amount;

    if(amount > balance){
        cout << "YOU HAVE INSUFFICIENT FUNDS";
        return 0;
    }
    else if(amount < 0){
        cout << "THAT'S NOT A VALID AMONUT"<<'\n';
        return 0;
    }
    else{
        return amount;
    }
}