#include <iostream>
using namespace std;
int main(){
    cout << "enter number 1" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "Enter number 2" << "\n";
    int number2 = 0;
    cin >> number2;

    bool isEqual = number1 == number2;

    cout << "0 signifies numbers are different" << "\n";
    cout << "1 signifies number are equal" << "\n";

    cout << "Reuslt = " << isEqual << "\n";

    //2147483647
    unsigned number_temp = 2147483647;
    cout << "number_temp = " << number_temp << "\n";  
    number_temp = number_temp * 2;
    cout << "number_temp = " << number_temp << "\n";
    return 0;

}