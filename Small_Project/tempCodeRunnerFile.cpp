void showBalance(double balance){
    
    cout << "Your balance is: $"<< setprecision(2) << fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout << "That's not a valid amount:\n";
        return 0;
    }
}
double withdraw(double balance){

    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if(amount > balance){
        cout << "insufficient funds\n";
        return 0;
    }
    else if(amount < 0){
        cout << "That's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}