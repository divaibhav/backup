/*
Ramesh wants to withdraw money from his account using atm,
Suresh is curious, what will happen if Ramesh didn't
have suffiecient balance.
WAP to demonstrate atm withdrawal process,if sufficient funds
availablein account, print current balance, withdraw
sucessful and print updated balance. 
otherwise print insuffient fund and current balance.
*/
#include <iostream>
using namespace std;
int main(){
    float current_balance = 5000;
    cout << "enter the withdraw amount in integer" << "\n";
    int withdraw_amount = 0;
    cin >> withdraw_amount;

    if( withdraw_amount <= current_balance){
        cout << "Current balance = " << current_balance << "\n";
        cout << "Withdrawal of rs . " << withdraw_amount
            << " is sucessful." << "\n";
        current_balance = current_balance - withdraw_amount;
        cout << "Updated Balance = " << current_balance << "\n";
    }
    else {
        cout << "Insufficient fund" << "\n";
        cout << "Current balance = " << current_balance << "\n";
    }
    return 0;

}











