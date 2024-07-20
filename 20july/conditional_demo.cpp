#include <iostream>
using namespace std;
int main(){
    float balance = 5000.55;
    cout << "enter the amount to withdraw" << "\n";
    int withdrawal_amt = 0;
    cin >> withdrawal_amt;
    //conditinal statement
    if(withdrawal_amt <= balance){
        cout << "Rs." << withdrawal_amt
            << " is withdrawn from your account" << "\n";
    }
    if(withdrawal_amt > balance){
        cout << "Insufficient Funds";
    }
    return 0;
}