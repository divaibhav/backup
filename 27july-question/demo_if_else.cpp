/*
WAP to accept a number from user,
and check whether the number is divisible by 7;
if yes print completely divisible by 7
otherwise check if number is divisble by 2,
if not print not divisible by 2 or 7

*/
#include <iostream>
using namespace std;
int main(){
    cout << "Enter an integer to check for divisibility by 7" << "\n";
    int number = 0;
    cin >> number;

    int remainder = number % 7;

    if(remainder == 0){
        cout << "Number " << number << " is divisble by 7" << "\n";
    }
    else {
        cout << "Number " << number << " is not divisble by 7" << "\n";
    }
    return 0;
}