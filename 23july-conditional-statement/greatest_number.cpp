//WAP to find the greatest number from 
// two given number. Numbers are given by user.
//Steps to solve the problem
// step 1 - include header files
// step 2 - using the std namespace
// step 3 - declaring main method/function
// step 4 - prompt the user to enter number1
// step 5 - declare a variable to store the entered value
// step 6 - read the input and store the value in declared variable
// step 7 - prompt
// step 8 - declare a variable
// step 9 - read the value
// step 10 - compare the entered numbers by using if statement,
//      if number 1 is greater than number 2, then step 11 
//      otherwise step 12
// step 11 print number 1 is greater than number 2,
// step 12 print number 2 is greater than number 1
// step 13 return 0
#include <iostream>
using namespace std;
int main(){
    cout << "Enter an integer value, number 1" << "\n";
    int number1 = 0;// initializing to remove garbage value
    cin >> number1;
    cout << "Enter an integer value, number2" << "\n";
    int number2 = 0;
    cin >> number2;
    if(number1 > number2){
        cout << "Number 1 = " << number1 
            << " is greater than Number 2 = " << number2 << "\n";
        //Number 1 = 89 is greater than Number 2 = 43
    }
    //cout << "Error";
    else {
        cout << "Number 2 = " << number2 
            << " is greater than Number 1 = " << number1 << "\n";

    }
    return 0;
    
}