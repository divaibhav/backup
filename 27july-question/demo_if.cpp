/*
WAP to accept a number form user and 
print positive if it is positve number
*/
#include <iostream>
using namespace std;
int main(){
    cout << "Enter an integer" << "\n";
    int number = 0;
    cin >> number;

    if(number > 0){
        cout << "Positve number" << "\n";
    }    
    return 0;
}