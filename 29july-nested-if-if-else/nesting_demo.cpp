/*
accept 3 numbers, find the greatest using nesting
*/
#include <iostream>
using namespace std;
int main(){
    cout << "Enter 3 integers" << "\n";
    int number1 = 0, number2 = 0, number3 = 0;
    cin >> number1 >> number2 >> number3;
    bool number1_equal_number2 = number1 == number2;
    if(number1 != number2 && number1 != number3 ){   

    if(number1 > number2){
        if(number1 > number3){
            cout << "number 1 is greatest" << "\n";
        }
        else{
            cout << "number 3 is greatest" << "\n";
        }
    } else{
        if(number2 > number3){
            cout << "number 2 is greatest" << "\n";
        }
        else{
            cout << "number 3 is greatest" << "\n";
        }
    }
    }
    else {
        cout <<"All three or two are equal" << "\n";
    }
}