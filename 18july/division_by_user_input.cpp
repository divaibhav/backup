#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout << "enter 6 values" << "\n";
    cin >>a>>b>>c>>d>>e>>f;
    cout << "enter an integer value for division" << "\n";
    double number1 = 0;
    // taking the input
    cin >> number1;
    cout << "enter an integer value" << "\n";
    double number2 = 0;
    // taking user input
    cin >> number2;
    double result = number1 / number2; //1.6667
    cout << "Result  = " << result;
    return 0;
}